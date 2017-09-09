template <typename T>
class CStack{
public:
	CStack();
	CStack(int capacity);
	~CStack();
	
	void Push(T item);
	T Pop();
	bool SearchItem(T value);
	void PrintItemList();
	
private:
	void ExtendMemory();
	
private:
	T* m_Array;
	const int DEFAULT_CAPACITY = 10;
	int m_Capacity;
	int m_Size;
};