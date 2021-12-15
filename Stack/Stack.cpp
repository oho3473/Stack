#include<iostream>
#include "Stack.h"

void Initialize(Stack& stack)
{
	stack.count = 0;
	stack.pTop = nullptr;
}

void ClearAll(Stack& stack)
{
	Element* pElement = stack.pTop;

	while (pElement != nullptr)
	{
		Element* pNext = pElement->pNext;
		delete pElement;
		pElement = pNext;
	}

	Initialize(stack);
}

void Push(Stack& stack, int value)
{
	Element* pElement = new Element{ value, nullptr };

	pElement->pNext = stack.pTop;
	stack.pTop = pElement;
	stack.count++;
}

bool Pop(Stack& stack)
{
	if (stack.count == 0)
	{
		std::cout << "STACK is empty!!" << std::endl;
		return false;
	}

	Element* pTemp = stack.pTop;
	stack.pTop = stack.pTop->pNext;
	stack.count--;

	std::cout << "POP : " << pTemp->value << std::endl;
	delete pTemp;

	return true;

}

void Print(Stack& stack)
{
	Element* pElement = stack.pTop;
	while (pElement != nullptr)
	{
		std::cout << pElement->value << std::endl;
		pElement = pElement->pNext;
	}
}
