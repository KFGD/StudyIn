#include <iostream>
#include "DataStructure/linkedList.h"
#include "DataStructure/stack.h"

using namespace std;

void TestCodeLinkedList(){
	CLinkedList linkedList;
	linkedList.InsertItemOnLast(0);
	linkedList.InsertItemOnLast(3);
	linkedList.InsertItemOnLast(5);
	linkedList.InsertItemOnLast(7);
	linkedList.InsertItemOnLast(9);
	linkedList.PrintItemList();
	linkedList.InsertItem(1);
	linkedList.PrintItemList();
	linkedList.DeleteItem(0);
	linkedList.PrintItemList();
}

void TestCodeStack(){
	CStack<int> stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);
	stack.Push(6);
	stack.PrintItemList();
	stack.Pop();
	stack.PrintItemList();
}

int main(int argc, char* argv[]) {
	cout << "Hello, goorm!" << endl;
	
	//TestCodeLinkedList();
	TestCodeStack();
	
	return 0;
}