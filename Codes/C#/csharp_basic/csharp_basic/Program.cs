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

////User input
//using System;
//namespace HelloWorld
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            //string userName = Console.ReadLine();
//            //Console.WriteLine("Usename: " + userName);

//            //Error: Cannot implicitly convert string to int
//            //int age = Console.ReadLine();
//            //Console.WriteLine(age);

//            //upgrade
//            int age = Convert.ToInt16(Console.ReadLine());
//            Console.WriteLine(age);

//        }
//    }
//}


////Comparison operators
//using System;
//namespace HelloWorld
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            int x = 5;
//            int y = 3;
//            Console.WriteLine(x > y);
//        }
//    }
//}

//C# Math
//using System;
//namespace LogicalOperators
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            double x = 114;
//            double y = 514;
//            Math.Max(x, y);
//        }
//    }
//}

////String Length
//using System;
//namespace StringLength
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            string txt = "abcde";
//            int a = txt.Length;
//            Console.WriteLine(a);
//        }
//    }
//}

//// Methods about string
//string txt = "Hello, World!";
//Console.WriteLine(txt.ToUpper());
//Console.WriteLine(txt.ToLower());


//// Concatenation
//using System;
//namespace Concatenation
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            string firstName = "John";
//            string lastName = "Doe";
//            string name1 = string.Concat(firstName, " ", lastName);
//            string name2 = firstName + " " + lastName + 114514;
//            Console.WriteLine(name1);
//            Console.WriteLine(name2);
//        }
//    }
//}

////String Interpolation
//using System;
//namespace StringInterpolation
//{
//    class Prog
//    {
//        static void Main(string[] arsg)
//        {
//            string firstName = "John";
//            string lastName = "Doe";
//            string name = $"My full name is: {firstName} {lastName}";
//            Console.WriteLine(name);
//        }
//    }
//}

//Access String
using System;
namespace AccessString
{
    class Prog
    {
        static void Main(string[] args)
        {
            string myString = "Hello, World!";
            Console.WriteLine(myString.Substring(myString.IndexOf('e')));
            //Console.WriteLine(myString[0]);
            //Console.WriteLine(myString.IndexOf('e'));
        }
    }
}