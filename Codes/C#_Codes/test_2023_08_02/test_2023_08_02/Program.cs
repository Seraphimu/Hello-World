using System;

namespace test_2023_08_02
{
    class Program
    {
        static void Main(string[] args)
        {
            //int a = 5;
            //int b = 6;
            //int c = a + b;
            //Console.WriteLine("{0} + {1} = {2}", a, b, c);
            //int num1 = 114;
            //int num2 = 514;
            //if (num1 != num2)
            //    Console.WriteLine("TNND");

            //for (int i = 0; i < 114; i++)
            //{
            //    Console.WriteLine(i);
            //}

            //int i = 0;
            //while (i <= 114)
            //{
            //    Console.WriteLine(i);
            //    i++;
            //}

            //int [] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            //foreach(int i in arr)
            //    Console.WriteLine(i);

            //异常捕获
            //测试：try, 错了：catch, 都会执行：finally
            try
            {

            }
            catch
            {
                Console.WriteLine("TNND");
            }


        }
    }
}


//怎么种四棵树使得任意两棵树的距离相等
//种在一个等边三角锥的四角，等边三角形每个边的长度都是相等的。

//有两根分布不均匀的香，一根香烧完要一个小时，怎么确定15分钟的时间
//可以先将一根香的两头点燃，再将另一根香的一头点燃，这样的话，第一根香烧完就是半个小时时间，因为
//因为一柱香烧完要一个小时，要是我两头点燃它，那它燃烧的时间就会缩短一半，另一根香也烧了半小时，
//还剩下半小时的时间此时再将这根烧了半小时的香的另外一头点燃使其燃烧时间也缩短到原来的一半，即15分钟