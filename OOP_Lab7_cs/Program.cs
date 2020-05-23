using System;
using MyLibrary_Lab7;

namespace OOP_Lab7_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введите размер односвязного списка: ");
            int size = Convert.ToInt32(Console.ReadLine());
            MyLinkedList MyList = new MyLinkedList();

            Console.WriteLine("Заполните список числами (добавление в начало)");
            int i = 0;
            while (i < size)
            {
                short input = Convert.ToInt16(Console.ReadLine());
                if (input >= -32768 && input <= 32767)
                {
                    MyList.AddFirst(input);
                    i++;
                }
                else
                    continue;
            }
                
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.Write("Ваш список: [ ");
            for (Node node = MyList.first; node != null; node = node.Next)
                Console.Write($"{node.Data} ");
            Console.Write("]\n");

            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine($"Список имеет {MyList.CountMultipleOfThree()} элементов кратных 3");

            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Удаление элементов меньших за среднее значение");
            int sum = 0;
            for (Node node = MyList.first; node != null; node = node.Next)
                sum += node.Data;
            double average = sum / size;
            Console.WriteLine($"Среднее значение списка = {average}");
            MyList.RemoveUnderAverage(average);
            Console.Write("Ваш список после удаления: [ ");
            for (Node node = MyList.first; node != null; node = node.Next)
                Console.Write($"{node.Data} ");
            Console.Write("]");

            Console.ReadKey();
        }
    }
}
