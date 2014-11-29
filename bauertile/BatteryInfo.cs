using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bauertile
{
    public class BatteryInfo
    {
        public string Name { get; private set; }
        public string Value { get; private set; }
        public string Symbol { get; private set; }

        public BatteryInfo(string name, string value, string symbol)
        {
            Name = name;
            Value = value;
            Symbol = symbol;
        }
    }
}
