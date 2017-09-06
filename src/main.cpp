#include <iostream>
#include "linkedList.h"

using namespace std;

int main(int argc, char* argv[]) {
	cout << "Hello, goorm!" << endl;
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
	return 0;
}