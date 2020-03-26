using System;

namespace MyLibrary_Lab3
{
    public class MyClass
    {
        private bool[] MyArray;
        private bool logicalSum;
        public int size;

        public MyClass()
        {
            MyArray = new bool[] { true, false, false, true, false, true, true, false, false, true };
            size = MyArray.Length;
        }
        public bool this[int index]
        {
            get 
            { 
                return !MyArray[index]; 
            }
            set
            {
                if (index > -1 && index < 10)
                {
                    MyArray[index] = value;
                }
            }
        }
        public bool LogicalSum
        {
            get
            {
                bool result = MyArray[0];
                for (int i = 1; i < MyArray.Length; i++)
                {
                    result |= MyArray[i];
                }
                logicalSum = result;
                return logicalSum;
            }
        }
    }
}
