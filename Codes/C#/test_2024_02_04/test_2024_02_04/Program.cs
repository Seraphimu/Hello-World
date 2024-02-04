using System;

namespace HelloWorld
{
    class Program
    {
        static void Main(string[] args)
        {
            int s = 0;
            for (int i = 0; i <= 100;  i++)
            {
                s += i;
            }
            Console.WriteLine(s);
        }
    }
}