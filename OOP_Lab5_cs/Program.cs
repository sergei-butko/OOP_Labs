using System;
using MyLibrary_Lab5;

namespace OOP_Lab5_cs
{
    class Program
    {
        static void Main(string[] args)
        {
            double x1, y1, x2, y2, x3, y3;
            Console.WriteLine("Введите координаты вершин вашего треугольника.");
            Console.WriteLine("Вершина 1: ");
            Console.Write("x1 = "); x1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("y1 = "); y1 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Вершина 2: ");
            Console.Write("x2 = "); x2 = Convert.ToDouble(Console.ReadLine());
            Console.Write("y2 = "); y2 = Convert.ToDouble(Console.ReadLine());
            Console.WriteLine("Вершина 3: ");
            Console.Write("x3 = "); x3 = Convert.ToDouble(Console.ReadLine());
            Console.Write("y3 = "); y3 = Convert.ToDouble(Console.ReadLine());

            Triangle MyTriangle = new Triangle(x1, y1, x2, y2, x3, y3);
            Console.WriteLine("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            Console.WriteLine("Периметр вашего треугольника = " + MyTriangle.Perimeter());
            Console.WriteLine("Площадь вашего треугольника = " + MyTriangle.Area());

            Console.Read();
        }
    }
}
