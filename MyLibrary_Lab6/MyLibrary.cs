using System;

namespace MyLibrary_Lab6
{
    public class MyException
    {
        private double a, c, d;
        public MyException(double a, double c, double d)
        {
            this.a = a;
            this.c = c;
            this.d = d;
        }
        private double Task(double a, double c, double d) 
        {
            if (Math.Pow(a, 2) - 1 == 0)
            {
                throw new DivideByZeroException("Denominator is Zero!");
            }
            else if (d / 4 <= 0)
            {
                throw new ArgumentOutOfRangeException("Sub-logarithmic expression is smaller than Zero!");
            }
            else
            {
                return (2 * c - Math.Log10(d / 4)) / (Math.Pow(a, 2) - 1);
            }
        }
    }
}
