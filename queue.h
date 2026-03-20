#pragma once
template <typename T>
class queue {
private:
	T* arr;
	int capacity = 1;
	int size = 0;
public:
	queue() {
		arr = new T[capacity];
	}
	~queue() {
		delete[] arr;
	}
	void push(T el) {
		if (size == capacity) {
			capacity *= 2;
			T* temp = new T[capacity];
			temp[size] = el;
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			delete[] arr;
			arr = temp;
		}
		else {
			arr[size] = el;
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