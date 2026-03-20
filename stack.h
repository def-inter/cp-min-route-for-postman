#pragma once
template <typename T>
class stack {
private:
	T* arr;
	int capacity = 1;
	int size = 0;
public:
	stack() {
		arr = new T[capacity];
	}
	~stack() {
		delete[] arr;
	}
	void push(T el) {
		if (size == capacity) {
			capacity *= 2;
			T* temp = new T[capacity];
			for (int i = 0; i < size - 1; i++) {
				temp[i + 1] = arr[i];
			}
			temp[0] = el;
			delete[] arr;
			arr = temp;
		}
		else {
			T* temp = new T[capacity];
			for (int i = 0; i < size - 1; i++) {
				temp[i + 1] = arr[i];
			}
			temp[0] = el;
			delete[] arr;
			arr = temp;
		}
		int i = size;
		size++;
	}
	T top() {
		return arr[0];
	}
	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	void pop() {
		T* parr = new T[size - 1];
		for (int i = 0; i < size - 1; i++) {
			parr[i] = arr[i + 1];
		}
		delete[] arr;
		arr = parr;
		size--;
		if (2 * size == capacity) {
			capacity = size;
		}
	}
};