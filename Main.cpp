#include <iostream>
#include <string>

#include "Stack.h"

int main(int argc, char **argv) {

	Stack<std::string> stack;

	std::string line;
	while (getline(std::cin, line))
		stack.push(new std::string(line));

	stack.print();

	return 0;
}

