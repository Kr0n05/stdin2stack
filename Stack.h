#ifndef STACK_H_
#define STACK_H_

#include <cstddef>
#include <iostream>

template<typename T> class Stack {
	struct Node {
		T* obj;
		Node* next;
		Node(T* obj, Node* next) :
			obj(obj), next(next) {
		}
	}* head;

public:
	Stack() :
		head(0) {
	}

	~Stack() {
		while (head)
			delete pop();
	}

	void push(T* obj) {
		Node* newHead = new Node(obj, head);
		head = newHead;
	}

	T* pop() {
		if (head == NULL)
			return 0;

		T* data = head->obj;
		Node* oldHead = head;

		head = head->next;
		delete oldHead;
		return data;
	}

	void print() {
		Node* current = head;
		while (current) {
			std::cout << *current->obj << std::endl;
			current = current->next;
		}
	}

};

#endif /* STACK_H_ */
