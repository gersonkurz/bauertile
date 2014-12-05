using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Controls.Primitives;
using Windows.UI.Xaml.Data;
using Windows.UI.Xaml.Input;
using Windows.UI.Xaml.Media;
using Windows.UI.Xaml.Navigation;
using System.Diagnostics;
using System.Collections.ObjectModel;
using System.Runtime.InteropServices;
using Windows.UI.Notifications;
using Windows.Data.Xml.Dom;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

namespace bauertile
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainPage : Page
    {
        private readonly ObservableCollection<BatteryInfo> BatteryInfos = new ObservableCollection<BatteryInfo>();
        public MainPage()
        {
            this.InitializeComponent();
            this.Loaded += MainPage_Loaded;
        }

        public enum ACLineStatus : byte
        {
            Offline = 0, Online = 1, Unknown = 255
        }

        public enum BatteryFlag : byte
        {
            High = 1,
            Low = 2,
            Critical = 4,
            Charging = 8,
            NoSystemBattery = 128,
            Unknown = 255
        }

        // Fields must mirror their unmanaged counterparts, in order
        [StructLayout(LayoutKind.Sequential)]
        public class SystemPowerStatus
        {
            public ACLineStatus ACLineStatus;
            public BatteryFlag BatteryFlag;
            public Byte BatteryLifePercent;
            public Byte Reserved1;
            public Int32 BatteryLifeTime;
            public Int32 BatteryFullLifeTime;
        }

        [DllImport("Kernel32")]
        private static extern Boolean GetSystemPowerStatus(SystemPowerStatus sps);

        private string TimeAsString(int seconds)
        {
            const int SECONDS_PER_MINUTE = 60;
            const int SECONDS_PER_HOUR = 60 * 60;

            if (seconds < 0)
            {
                return "unknown";
            }
            else
            {
                int hours = seconds / SECONDS_PER_HOUR;
                seconds -= hours * SECONDS_PER_HOUR;
                int minutes = seconds / SECONDS_PER_MINUTE;
                seconds -= minutes * SECONDS_PER_HOUR;

                if (hours == 0)
                {
                    return string.Format("{0} minutes", minutes);
                }
                else
                {
                    return string.Format("{0} hours {1} minutes", hours, minutes);
                }
            }
        }

        public static void SetLiveTile(string title, string body, int seconds)
        {
            // Get tile template.
            var tileTemplate = TileTemplateType.TileSquareBlock;
            var tileXml = TileUpdateManager.GetTemplateContent(tileTemplate);

            // Create notification.
            var notification = new TileNotification(tileXml);
            notification.ExpirationTime = DateTime.Now + TimeSpan.FromSeconds(seconds);
            
            // Set notification text.
            XmlNodeList nodes = tileXml.GetElementsByTagName("text");
            nodes[0].InnerText = title;
            nodes[1].InnerText = body;

            // Update Live Tile.
            var upd = TileUpdateManager.CreateTileUpdaterForApplication();
            upd.Update(notification);
        }


        void MainPage_Loaded(object sender, RoutedEventArgs e)
        {
            SystemPowerStatus sps = new SystemPowerStatus();
            GetSystemPowerStatus(sps);

            if (sps.BatteryFlag == BatteryFlag.NoSystemBattery)
            {
                itemListView.Visibility = Visibility.Collapsed;
            }
            else
            {
                BatteryInfos.Add(new BatteryInfo("AC line status", sps.ACLineStatus.ToString(), "\uff5e", 2));
                BatteryInfos.Add(new BatteryInfo("battery flag", sps.BatteryFlag.ToString(), "\uE14C", 1));
                BatteryInfos.Add(new BatteryInfo("battery life", string.Format("{0} %", sps.BatteryLifePercent), "\uE156", 1));
                BatteryInfos.Add(new BatteryInfo("battery lifetime", TimeAsString(sps.BatteryLifeTime), "\ue26f", 1));
                BatteryInfos.Add(new BatteryInfo("full battery lifetime", TimeAsString(sps.BatteryFullLifeTime), "\ue270", 0));
                itemListView.ItemsSource = BatteryInfos;
            }

            SetLiveTile(string.Format("{0} %", sps.BatteryLifePercent), TimeAsString(sps.BatteryLifeTime), 20);
        }
    }
}
