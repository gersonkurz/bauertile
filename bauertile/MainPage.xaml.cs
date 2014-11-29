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
using Library1;
using System.Diagnostics;
using System.Collections.ObjectModel;

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

        void MainPage_Loaded(object sender, RoutedEventArgs e)
        {
            Root root = new Root();


            BatteryInfos.Add(new BatteryInfo("AC-Line Status", root.ACLineStatus.ToString(), "\uff5e"));

            BatteryInfos.Add(new BatteryInfo("Battery Flag", root.BatteryFlag.ToString(), "\uE14C"));
            BatteryInfos.Add(new BatteryInfo("Battery Life in %", root.BatteryLifePercent.ToString(), "\uE156"));
            BatteryInfos.Add(new BatteryInfo("Battery Lifetime", root.BatteryLifeTime.ToString(), "\ue26f"));
            BatteryInfos.Add(new BatteryInfo("Full Battery Lifetime", root.BatteryFullLifeTime.ToString(), "\ue270"));

            if (root.BatteryFlag == battery_flag.BATTERY_FLAG_NO_BATTERY )
            {

            }

            itemListView.ItemsSource = BatteryInfos;

        }
    }
}
