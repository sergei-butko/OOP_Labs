#include "Class.h"

Node::Node(short data) {
    this->data = data;
    Next = nullptr;
}

void MyLinkedList::AddFirst(short data)
{
    if (first == nullptr)
        first = new Node(data);
    else
    {
        Node *node = new Node(data);
        node->Next = first;
        first = node;
        if (count == 0)
            last = first;
    }
    count++;
}
void MyLinkedList::RemoveUnderAverage(double average)
{
    Node *current = first;
    Node *previous = nullptr;

    while (current != nullptr)
    {
        if (current->data < average)
        {
            if (current == first)
                first = current->Next;
            else
                previous->Next = current->Next;
            count--;
        }
        previous = current;
        current = current->Next;
    }
}
int MyLinkedList::CountMultipleOfThree()
{
    int counter = 0;
    Node *current = first;
    while (current != nullptr)
    {
        if (current->data % 3 == 0 && current->data != 0)
            counter++;
        current = current->Next;
    }
    return counter;
}
