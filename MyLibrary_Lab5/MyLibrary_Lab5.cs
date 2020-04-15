using System;

namespace MyLibrary_Lab5
{
    public class Figure
    {
        protected double x1, y1, x2, y2, x3, y3;
        public Figure(double x1, double y1, double x2, double y2, double x3, double y3)
        { 
                this.x1 = x1;
                this.y1 = y1;
                this.x2 = x2;
                this.y2 = y2;
                this.x3 = x3;
                this.y3 = y3;
        }
        protected double SideLength(double Ax, double Ay, double Bx, double By)
        {
            return Math.Sqrt(Math.Pow((Bx - Ax), 2) + Math.Pow((By - Ay), 2));
        }
    }
    public class Triangle : Figure
    {
        public Triangle(double x1, double y1, double x2, double y2, double x3, double y3):base(x1, y1, x2, y2, x3, y3) { }
        public double Perimeter()
        {
            return (SideLength(x1, y1, x2, y2) + SideLength(x2, y2, x3, y3) + SideLength(x1, y1, x3, y3));
        }
        public double Area()
        {
            double HalfPerimetr = 0.5 * Perimeter();
            return Math.Sqrt(HalfPerimetr * (HalfPerimetr - SideLength(x1, y1, x2, y2)) * (HalfPerimetr - SideLength(x2, y2, x3, y3)) * (HalfPerimetr - SideLength(x1, y1, x3, y3)));
        }
    }
}
