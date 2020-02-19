using System;

namespace OOP_Lab1_cs {
    class Program {
        static void Main(string[] args) {
            Console.WriteLine("Введите два числа:");
            Console.Write("a = "); int a = Convert.ToInt32(Console.ReadLine());
            Console.Write("b = "); int b = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine("\nПобитовое сложение " + a + " и " + b + " = " + Dodav(a, b) + "\n");

            bool flag = Sravnen(a, b);
            if (flag == true) {
                Console.WriteLine(a + " меньше " + b);
            }
            else {
                Console.WriteLine(a + " не меньше " + b);
            }

            Console.ReadKey();
        }

        static int Dodav(int a, int b) {
            return a | b;
        }

        static bool Sravnen(int a, int b) {
            int bitA = (a >> sizeof(int) * 8 - 1) & 1;
            int bitB = (b >> sizeof(int) * 8 - 1) & 1;
            if (bitA < bitB) {
                return false;
            }
            else if (bitA > bitB) {
                return true;
            }
            else {
                for (int i = sizeof(int) * 8 - 2; i >= 0; i--) {
                    bitA = (a >> i) & 1;
                    bitB = (b >> i) & 1;
                    //Console.WriteLine(bitA + " " + bitB);
                    if (bitA != bitB && bitA == 0) {
                        return true;
                    }
                    else if (bitA != bitB && bitA == 1) {
                        return false;
                    }
                }
                return false;
            }
        }
    }
}