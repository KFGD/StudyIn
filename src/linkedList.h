class CLinkedList{
private:
	struct Node{
	public:
		Node(int value);
		Node(Node* next, int value);
		
		Node* mNext;
		int mValue;
	};
	
private:
	void RecursiveDelete(Node* node);
	
public:
	CLinkedList();
	~CLinkedList();
	void InsertItem(int value);
	void InsertItemOnLast(int value);
	bool DeleteItem(int index);
	bool SearchItem(int value);
	void PrintItemList();
	
private:
	Node* mHead;
	int mSize;
};