#pragma once
using namespace std;
#include <iostream>
struct elem{
	int val; // Хранимое число
	elem *next; // указатель на следующий элемент

	elem(int a){
		val = a; // запоминаем значение элемента
		next = 0; // добавляем его в конец
	}
};

class TList{
private:
	elem *first;
public:
	TList();
	bool IsEmpty(void) const;
	bool IsFull(void) const;
	void Push(int val);
	void Print(void);
	void Input(void);
	int Peek();
	int Pop(void);
	~TList();
	elem *Poisk(int i);
	void Del(elem* q);
	void InsertAfter(elem* t, int val);
	void InsertBefore(elem* t, int val);
};