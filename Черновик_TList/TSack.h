#pragma once
#include "TList.h"
class TStack: public TList{
public:
	TStack();
	bool IsEmpty(void) const;
	void Push(int val);
	int Peek(void);
	int Pop(void);
	//~TStack();
};