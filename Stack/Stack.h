#pragma once

enum Command
{
	PUSH = 1,
	POP = 2,
	EXIT = 3
};

struct Element
{
	int value;
	Element* pNext;
};

struct Stack
{
	int count;
	Element* pTop;
};

void Initialize(Stack& stack);
void ClearAll(Stack& stack);
void Push(Stack& stack, int value);
bool Pop(Stack& stack);
void Print(Stack& stack);