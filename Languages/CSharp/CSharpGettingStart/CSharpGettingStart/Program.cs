using System;

namespace Program
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[10];
            for (int i = 0; i < arr.Length; i++)
            {
                arr[i] = i;
                Console.WriteLine(arr[i]);
            }
            //Console.WriteLine("Hello, World!");
        }
    }
}