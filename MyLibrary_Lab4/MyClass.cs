using System;

namespace MyLibrary_Lab4
{
    public class MyClass
    {
        public string str;
        private int size;
        public MyClass()
        {
            str = null;
        }
        public MyClass(string str)
        {
            this.str = str;
            size = str.Length;
        }
        public MyClass(MyClass str)
        {
            this.str = str.str;
            size = str.strLength();
        }

        public int strLength()
        {
            return size;
        }
        public static MyClass operator +(MyClass S1, MyClass S2)
        {
            return new MyClass { str = S1.str + S2.str };
        }
        public static MyClass operator -(MyClass str, char Ch)
        {
            string result = "";
            for(int i = 0; i < str.size; i++)
            {
                if(str.str[i] != Ch)
                {
                    result += str.str[i];
                }
            }
            MyClass result1 = new MyClass(result);
            return result1;
        }
    }
}