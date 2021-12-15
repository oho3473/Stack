#include<iostream>
#include"Stack.h"

void printInfo()
{
	std::cout << "----STACK----" << std::endl;
	std::cout << "[1] push" << std::endl;
	std::cout << "[2] pop" << std::endl;
	std::cout << "[3] exit" << std::endl;
	std::cout << "-------------" << std::endl;
}

void ProcessUserInput(Stack& stack)
{
	int command{};
	
	while(true)
	{
		Print(stack);

		std::cout << std::endl;
		std::cout << "> ";
		std::cin >> command;



		switch (command)
		{
		case PUSH:
		{
			int value;
			std::cout << "    > ";
			std::cin >> value;
			Push(stack, value);
			break;
		}
		case POP:
		{
			Pop(stack);
			break;
		}
		case EXIT:
		{
			return;
			break;
		}
		default:
			std::cout << "잘못된 명령어 입니다." << std::endl;
			break;
		}
	}
}


int main()
{
	Stack myStack;

	Initialize(myStack);

	printInfo();
	ProcessUserInput(myStack);

	ClearAll(myStack);

}