using System;
using MyLibrary_Lab6;

namespace OOP_Lab6_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            MyException[] obj = new MyException[5];
            obj[0] = new MyException(1, 5, -4);     //Inappropriate value for a and d
            obj[1] = new MyException(-1, 0, 0);     //Inappropriate value for a and d
            obj[2] = new MyException(1, -5, 4);     //Inappropriate value for a
            obj[3] = new MyException(-2, 5, 0);     //Inappropriate value for d
            obj[4] = new MyException(2, 7.5, 40);   //Correct variant

            for (int i = 0; i < 5; i++)
            {
                Console.WriteLine("Situation " + i + ": " + obj[i]);
            }

            Console.ReadKey();
        }
    }
}
