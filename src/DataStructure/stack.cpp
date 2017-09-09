#include "stack.h"
#include <iostream>
#include <cstring>

template<typename T>
CStack<T>::CStack()
: m_Array(nullptr), m_Size(0), m_Capacity(DEFAULT_CAPACITY)
{
	this->m_Array = new T[m_Capacity];	
}

template<typename T>
CStack<T>::CStack(int capacity)
: m_Array(nullptr), m_Size(0), m_Capacity(capacity)
{
	this->m_Array = new T[m_Capacity];
}

template<typename T>
CStack<T>::~CStack()
{
	delete m_Array;
}

template<typename T>
void CStack<T>::ExtendMemory(){
	m_Capacity = m_Size + DEFAULT_CAPACITY;
	T* temp = m_Array;
	m_Array = new T[m_Capacity];
	memcpy(m_Array, temp, m_Size);
}

template<typename T>
void CStack<T>::Push(T item){
	if(m_Size == m_Capacity)
		ExtendMemory();
	m_Array[m_Size] = item;
	++m_Size;
}


template<typename T>
T CStack<T>::Pop(){
	--m_Size;
	return m_Array[m_Size+1];
}

template<typename T>
bool CStack<T>::SearchItem(T value){
	
}

template<typename T>
void CStack<T>::PrintItemList(){
	for(int i=0; i<m_Size; ++i)
		std::cout << m_Array[i] << " ";
	std::cout << std::endl;
}

template class CStack<int>;