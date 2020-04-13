using System;
using MyLibrary_Lab4;

namespace OOP_Lab4_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите строку символов: ");
            string str = Console.ReadLine();

            MyClass S1 = new MyClass();
            MyClass S2 = new MyClass(str);
            MyClass S3 = new MyClass(S2);

            S2 -= '#';
            Console.WriteLine("Результат вычитания символа '#' с об'екта S2: " + S2.str);

            S1 = S2 + S3;
            Console.WriteLine("Результат сложения S2 и S3, добавленый в S1: " + S1.str);

            Console.ReadKey();
        }
    }
}