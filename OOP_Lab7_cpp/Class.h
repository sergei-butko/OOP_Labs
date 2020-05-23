#pragma once

class Node
{
public:
	Node* Next;
	short data;
	Node(short);
};

class MyLinkedList 
{
public:
	Node* first;

	void AddFirst(short);
	void RemoveUnderAverage(double);
	int CountMultipleOfThree();
private:
	Node* last = nullptr;
	int count = 0;
};
