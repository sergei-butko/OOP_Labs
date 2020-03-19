using System;

namespace MyLibrary
{
    public class MyString
    {
        private string text;
        public string Text
        {
            set { text = value; }
            get { return text; }
        }
        public int GetSize(string str)
        {
            return str.Length;
        }
    }

    public class ChangeString
    {
        public string AddLine(string a, string b)
        {
            string str = String.Concat(a, b);
            return str;
        }

        public string DeletePart(string text, int first, int last)
        {
            text.Remove(first, last - first);
            return text;
        }

        public string DeleteAll(string text)
        {
            return text.Remove(0, text.Length);
        }

        public string FindSmallest(string text1, string text2, string text3)
        {
            string str = text1;
            if (text2.Length < str.Length)
                str = text2;
            if (text3.Length < str.Length)
                str = text3;
            return str;
        }

        public float FindConsonant(string text)
        {
            int Size = text.Length;
            int ConsonantsAmount = 0;
            char[] a = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z' };
            for (int i = 0; i < Size; i++)
            {
                for (int j = 0; j < 20; j++)
                {
                    if (text[i] == a[j])
                        ConsonantsAmount++;
                }
            }
            for (int i = 0; i < text.Length; i++)
            {
                if (text[i] == ' ' || text[i] == '.' || text[i] == ',' || text[i] == '!')
                {
                    Size--;
                }
            }
            float result = (ConsonantsAmount * 100) / Size;
            return result;
        }

        public string DeleteSpace(string text)
        {
            text = text.Trim();
            return text;
        }

        public string DeleteExtraSpaces(string text)
        {
            while (text.Contains("  "))
                text = text.Replace("  ", " ");
            return text;
        }
    }
}