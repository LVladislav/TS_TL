#include "TList.h"


TList::TList()
{
	first = 0;
}


TList::~TList()
{
	elem *cur = first;
	while (cur != 0)
	{
		elem *pred = cur;
		cur = cur->next;
		delete pred;
	}
	first = 0;
}

void TList::Push(int val)
{
	if (first == 0)
	{
		first = new elem(val);
	}
	else
	{
		elem *cur;
		for (cur = first; cur -> next != 0;cur=cur->next)
		{ }
		cur ->next= new elem(val);
	}
}

void TList::Print(void)
{
	elem *cur;
	cout << "LIST: " << endl;
	if (first == 0)
	{
		cout << "No elem!" << endl;
		return;
	}
	else {
		for (cur = first; cur != 0; cur = cur->next)
		{
			cout << cur->val << endl;
		}
		
	}
}

void TList::Input(void)
{
	elem *cur;
	cout << "Input, pok ne 0: " << endl;
	while (true){
		int i;
		cin >> i;
		if (i == 0)
		{
			break;
		}
		this->Push(i); //добавление в текущий список
	}
}

int TList::Peek()
{
	elem *cur;
	for (cur = first; cur->next != 0; cur = cur->next)
	{
	}

	return cur->val;
}


bool TList::IsEmpty(void) const
{
	return first == 0;
}

elem *TList::Poisk(int i)
{
	elem *cur;
	for (cur = first; cur != 0; cur = cur->next)
	{
		if (cur->val == i)
		{
			return cur;
		}
	}
	return 0;
}

void TList::Del(elem* q)
{
	elem *cur;
	if (first==q)
	{
		first = first->next;
	}
	else
	{
		for (cur = first; cur->next != q; cur = cur->next)
		{
		}
		cur->next = cur->next->next;
	}
	delete q;
}

int TList::Pop(void)
{
	elem *cur;
	for (cur = first; cur->next != 0; cur = cur->next)
	{
	}

	int x= cur->val;
	Del(cur);
	return x;
}

void TList::InsertAfter(elem *t, int val)
{
	
	elem *a = new elem(val); // создали новый элемент с заданным значением
	a->next = t->next; // то что было после t, должно стать после а
	t->next = a; // а становится после t
}

void TList::InsertBefore(elem *t, int val)
{
	elem *a = new elem(val);
	elem *cur;

	if (t != first)
	{
		for (cur = first; cur->next != t; cur = cur->next) // т.к. надо дойти до t, а не до конца
		{
		}
		a->next = cur->next;
		cur->next = a;
	}
	else // вставка перед первым
	{
		a -> next = first; 
		first = a;
	}
}