using System;

namespace MyLibrary_Lab7
{
    public class Node
    {
        public Node(short data) { Data = data; }
        public short Data { get; set; }
        public Node Next { get; set; }
}
    public class MyLinkedList
    {
        public Node first;
        private Node last;
        private int count;

        public void AddFirst(short data)
        {
            Node node = new Node(data);
            node.Next = first;
            first = node;
            if (count == 0)
                last = first;
            count++;
        }
        public void RemoveUnderAverage(double average)
        {
            Node current = first;
            Node previous = null;

            while (current != null)
            {
                if (current.Data < average)
                {
                    if (previous != null)
                    {
                        previous.Next = current.Next;

                        if (current.Next == null)
                            last = previous;
                    }
                    else
                    {
                        first = first.Next;

                        if (first == null)
                            last = null;
                    }
                    count--;
                }

                previous = current;
                current = current.Next;
            }
        }
        public int CountMultipleOfThree()
        {
            int counter = 0;
            Node current = first;
            while (current != null)
            {
                if (current.Data % 3 == 0 && current.Data != 0)
                    counter++;
                current = current.Next;
            }
            return counter;
        }    
    }
}
