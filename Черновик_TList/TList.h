#pragma once
using namespace std;
#include <iostream>
struct elem{
	int val; // �������� �����
	elem *next; // ��������� �� ��������� �������

	elem(int a){
		val = a; // ���������� �������� ��������
		next = 0; // ��������� ��� � �����
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