using System;
using MyLibrary_Lab8;

namespace OOP_Lab8_cs
{
    class Program
    {
        delegate int IndexOf(char ch);
        static void Main(string[] args)
        {
            Console.Write("Введите размер стека: ");
            int size = Convert.ToInt32(Console.ReadLine());
            MyStack Line = new MyStack(size);

            Console.WriteLine("Заполните стек символами:");
            for (int i = 0; i < size; i++)
                Line.Push(Convert.ToChar(Console.ReadLine()));

            bool alive = true;
            while (alive)
            {
                Console.WriteLine("\nВыберите действие:");
                Console.WriteLine("\t1 - Узнать индекс символа.");
                Console.WriteLine("\t2 - Добавить элемент.");
                Console.WriteLine("\t3 - Удалить элемент.");
                Console.WriteLine("\t4 - Выйти из программы.");
                Console.Write("Ваш выбор: ");
                int choice = Convert.ToInt32(Console.ReadLine());

                switch (choice)
                {
                    case 1:
                        Console.Write("Введите символ: ");
                        char ch1 = Convert.ToChar(Console.ReadLine());
                        IndexOf del = Line.FindElement;
                        int result = del(ch1);
                        if (result != -1)
                            Console.WriteLine($"Индекс символа '{ch1}' = {result}");
                        else
                            Console.WriteLine($"Строка не содержит символ '{ch1}'!");
                        break;
                    case 2:
                        Line.Notify += DisplayMessage;
                        Console.Write("Введите новый символ: ");
                        Line.Push(Convert.ToChar(Console.ReadLine()));
                        break;
                    case 3:
                        Console.WriteLine($"Удален символ '{Line.Pop()}'");
                        break;
                    case 4:
                        alive = false;
                        continue;
                    default:
                        Console.WriteLine("Действие не найдено!");
                        break;
                }
            }
            Console.ReadKey();
        }
        private static void DisplayMessage(object sender, EventArgs message)
        {
            Console.WriteLine(message);
        }
    }
}
