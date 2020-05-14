using System;

namespace MyLibrary_Lab8
{
    public class MyStack
    {
        public delegate void MySt(object sender, EventArgs message);
        public event MySt Notify;

        private int _Size;
        private char[] _Array;
        private int _Top;
        public MyStack(int Size)
        {
            this._Size = Size;
            this._Top = 0;
            this._Array = new char[this._Size];
        }
        public bool IsFull() { return this._Top == this._Size; }
        public bool IsEmpty() { return this._Top == 0; }

        public void Push(char Element)
        {
            if (this.IsFull())
            {
                Notify?.Invoke(this, new StackEventArgs() { Message = "Стек переполнен!" });
                return;
            }
            this._Array[this._Top++] = Element;
        }
        public char Pop() { return this._Array[--this._Top]; }

        public int FindElement(char ch)
        {
            for (int i = 0; i < _Size; i++)
            {
                if (_Array[i] == ch)
                    return i;
                else
                    continue;
            }
            return -1;
        }
    }
    public class StackEventArgs : EventArgs
    {
        public string Message { get; set; }
    }
}
