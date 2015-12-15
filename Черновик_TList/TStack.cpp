#include "TSack.h"

TStack::TStack() :TList()
{
}

void TStack::Push( int val)
{
	TList::Push(val);
}

int TStack::Peek(void)
{
	return TList::Peek();
}

bool TStack::IsEmpty(void) const
{
	return TList::IsEmpty();
}

int TStack::Pop(void)
{
	return TList::Pop();
}