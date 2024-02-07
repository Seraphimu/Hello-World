////Type Casting
//using System;
//namespace HelloWorld
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            int myInt = 10;
//            double myDouble = 2.5;
//            bool myBool = true;
//            Console.WriteLine(Convert.ToString(myInt));
//            Console.WriteLine(Convert.ToDouble(myInt));
//            Console.WriteLine(Convert.ToInt32(myDouble));
//            Console.WriteLine(Convert.ToString(myBool));
//        }
//    }
//}

//User input
using System;
namespace HelloWorld
{
    class Prog
    {
        static void Main(string[] args)
        {
            //string userName = Console.ReadLine();
            //Console.WriteLine("Usename: " + userName);

            //Error: Cannot implicitly convert string to int
            //int age = Console.ReadLine();
            //Console.WriteLine(age);

            //upgrade
            int age = Convert.ToInt16(Console.ReadLine());
            Console.WriteLine(age);

        }
    }
}