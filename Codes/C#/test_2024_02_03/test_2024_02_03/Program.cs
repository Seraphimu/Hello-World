//using System;

//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Hello, World!\n");
//        }
//    }
//}

//using System;
//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Hello World!\n");
//        }
//    }
//}

//class Program
//{
//    static void Main(string[] args)
//    {
//        Console.WriteLine("Hello World!\n");
//    }
//}



//class Prog
//{
//    static void Main(string[] args )
//    {
//        Console.WriteLine("Hello\n");
//    }
//}

//using System;
//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            //Console.WriteLine("Hello, World!");
//            Console.Write("114514");
//            Console.Write("1919810");
//            Console.WriteLine();
//            Console.WriteLine("114514");
//            Console.WriteLine("1919810");
//        }
//    }
//}

//using System;
//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Hello, World!");
//            Console.Write("Hello, World!");
//            Console.Write("I will print on the same line.");
//        }
//    }
//}

//using System;
//namespace HelloWorld
//{
//    class HomoProgram
//    {
//        static void Main(string[] args)
//        {
//            string homoName = "田所浩二";
//            int homoId = 114514;

//            Console.WriteLine("Name: " + homoName);
//            Console.WriteLine("ID: " + homoId);
//        }
//    }
//}







//class Prog
//{
//    static void Main(string[] args)
//    {
//        //int homoId = 114514;
//        //Console.WriteLine(homoId);
//        //homoId = 1919810;
//        //Console.WriteLine(homoId);
//        string firstName = "浩二";
//        string lastName = "田所";
//        string fullName = lastName + firstName;
//        Console.WriteLine(fullName);
//    }
//}


////Hello World
//using System;       //it contained WriteLine() method.

//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)         //Main() method
//        {
//            Console.WriteLine("Hello World");   //output text "Hello World"
//        }
//    }
//}

//// WriteLine() method and Write() method
//using System;
//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("Hello World");
//            Console.WriteLine("It will not print on the same line.");
//            Console.Write("Hello World");
//            Console.Write("It will print on the same line.");
//        }
//    }
//}


//// "+" operator for numeric values
//using System;
//namespace HelloWorld
//{
//    class Program
//    {
//        static void Main(string[] args)
//        {
//            int a = 114514;
//            int b = 1919810;

//            Console.WriteLine(a + b);
//        }
//    }
//}

// "+" operator in WriteLine() method
//using System;
//using System.Globalization;
//namespace HelloWorld
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            string name = "田所浩二";
//            int age = 114514;
//            Console.WriteLine("Name: " + name);
//            Console.WriteLine("Age: " + age);
//        }
//    }
//}

//// "+" operator in string
//using System;
//namespace HelloWorld
//{
//    class Prog
//    {
//        static void Main(string[] args)
//        {
//            string firstName = "浩二";
//            string lastName = "田所";
//            string name = lastName + firstName;
//            Console.WriteLine(name);
//        }
//    }
//}

//constant variable and multiple variables
using System;
namespace HelloWorld
{
    class Prog
    {
        static void Main(string[] args)
        {
            const int id = 114514;
            //id = 114; //error
            int a, b, c;
            a = b = c = 114514;
            Console.WriteLine(a + b + c);
        }
    }
}