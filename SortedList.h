//This class isn't separated into two files to avoid reference error
//when compiling from command line

#ifndef SortedList_H_INCLUDED
#define SortedList_H_INCLUDED

#include<iostream>
using namespace std;

//T is the ItemType
template <class T>
class SortedList {
private:
	T* data;
	int length;
	int maxSize;
	int currentPos;
	
public:
	SortedList();
	SortedList(int);
	~SortedList();
	void InsertItem(T);
	bool GetNextItem(T&);
	void ResetList();
	bool IsFull();
	void PrintAll();
	int GetLength();
	void DeleteAll();
};




///Function Definitions:

template <class T>
SortedList<T>::SortedList(int size) {
	maxSize = size;
	data = new T[maxSize];
	length = 0;
	currentPos = -1;
}

template <class T>
SortedList<T>::SortedList() {
	maxSize = 3;
	data = new T[maxSize];
	length = 0;
	currentPos = -1;
}

template <class T>
void SortedList<T>::InsertItem(T item) {
	int location = 0;
	bool moreToSearch = (location<length);

	if(IsFull()){
		return;
		//If list is already full, returns without any signal
	}
	while (moreToSearch) {
		if( item > data[location] ){
			location++;
			moreToSearch = (location<length);
		}
		else{
			moreToSearch = false;
		}	
	}
	for (int index = length; index>location; index--) {
		data[index] = data[index - 1];
	}
	data[location] = item;
	length++;
}

template <class T>
SortedList<T>::~SortedList() {
	delete[] data;
}

template <class T>
bool SortedList<T>::IsFull(){
	return length==maxSize;
}

template <class T>
void SortedList<T>::ResetList() {
	currentPos = -1;
}

template <class T>
bool SortedList<T>::GetNextItem(T& item) {
	if(currentPos>=maxSize){
		return false;
		//if currentPosition exceeds maximum number of elements
	}
	currentPos++;
	item = data[currentPos];
	return true;
}

template <class T>
void SortedList<T>::PrintAll() {
	for(int i=0; i<maxSize; i++){
		cout<<data[i]<<" "<<endl;
	}
	cout<<endl;
}

template <class T>
int SortedList<T>::GetLength() {
	return length;
}

template <class T>
void SortedList<T>::DeleteAll() {
	delete[] data;
	data = new T[maxSize];
	length = 0;
	currentPos = -1;
}


#endif // SortedList_H_INCLUDED
