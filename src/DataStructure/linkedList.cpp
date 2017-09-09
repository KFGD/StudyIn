#include"linkedList.h"
#include<iostream>

CLinkedList::Node::Node(int value)
	:mNext(nullptr),mValue(value)
{}

CLinkedList::Node::Node(Node* next, int value)
	:mNext(next),mValue(value)
{}

CLinkedList::CLinkedList()
	:mHead(nullptr), mSize(0)
{}

CLinkedList::~CLinkedList(){
	RecursiveDelete(mHead);
}

void CLinkedList::RecursiveDelete(Node* node){
	if(nullptr != node->mNext)
		RecursiveDelete(node->mNext);
	delete node;
}

void CLinkedList::InsertItem(int value){
	Node* newNode = new Node(mHead, value);
	mHead = newNode;
	++mSize;
}

void CLinkedList::InsertItemOnLast(int value){
	if(nullptr == mHead){
		mHead = new Node(value);
	}
	else{
		Node* lastNode = mHead;
		Node* newNode = new Node(value);
		while(nullptr != lastNode->mNext)
			lastNode = lastNode->mNext;
		lastNode->mNext = newNode;
	}
	++mSize;
}

bool CLinkedList::DeleteItem(int index){
	bool bReturn = false;
	Node* currentNode = mHead;
	Node* previousNode = nullptr;
	for(int i = 0; i<=index; ++i){
		previousNode = currentNode;
		currentNode = currentNode->mNext;
	}
	
	if(nullptr != currentNode){
		previousNode->mNext = currentNode->mNext;
		delete currentNode;
		--mSize;
		bReturn = true;
	}
	
	return bReturn;
}

bool CLinkedList::SearchItem(int value){
	bool bReturn = false;
	Node* currentNode = mHead;
	while(nullptr != currentNode){
		if(value == currentNode->mValue){
			bReturn = true;
			break;
		}
	}
	return bReturn;
}

void CLinkedList::PrintItemList(){
	Node* currentNode = mHead;
	while(nullptr != currentNode){
		std::cout << currentNode->mValue << " ";
		currentNode = currentNode->mNext;
	}
	std::cout << std::endl;
}