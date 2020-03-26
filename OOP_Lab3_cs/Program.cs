using System;
using MyLibrary_Lab3;

namespace OOP_Lab3_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            MyClass Object = new MyClass();

            Console.Write("Ваш массив: { ");
            for (int i = 0; i < Object.size; i++)
            {
                Console.Write(Object[i] + " ");
            }
            Console.WriteLine("}");
            Console.WriteLine("Его Размерность = " + Object.size);
            Console.WriteLine("==================================================");

            try
            {
                int num1 = 5;
                Console.WriteLine("Вводим число " + num1 + " принадлежащее диапазону массива.");
                Console.WriteLine("Элемент с индексом " + num1 + " = " + Object[num1]);
                Console.WriteLine("==================================================");


                int num2 = 15;
                Console.WriteLine("Вводим число " + num2 + " не принадлежащее диапазону массива.");
                Console.WriteLine("Элемент с индексом " + num2 + " = " + Object[num2]);
            }
            catch
            {
                Console.WriteLine("Число не принадлежит диапазону массива!");
                Console.WriteLine("==================================================");

            }

            Console.WriteLine("Результат логического сложения всех элементов массива = " + Object.LogicalSum);

            Console.ReadKey();
        }
    }
}
