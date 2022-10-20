using System;
using System.Collections.Generic;

namespace test
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            List<int> array = new List<int>();
            for (int i = 0; i < n; i++)
            {
                array.Add(int.Parse(Console.ReadLine()));
            }

            Dictionary<int, int> occures = new Dictionary<int, int>();
            for (int i = 0; i < n; i++)
            {
                if (occures.ContainsKey(array[i]))
                {
                    occures[array[i]]++;
                }
                else
                {
                    occures.Add(array[i], 1);
                }
            }
            List<int> keys = new List<int>();
            int maxVal = 0;
            foreach (var occure in occures)
            {
                if (occure.Value > maxVal)
                {
                    keys.Clear();
                    maxVal = occure.Value;
                    keys.Add(occure.Key);
                }
                else if (occure.Value == maxVal)
                {
                    keys.Add(occure.Key);
                }
            }

            Console.WriteLine(string.Join(' ', keys));
        }
    }
}
