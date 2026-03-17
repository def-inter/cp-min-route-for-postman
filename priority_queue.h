#pragma once
#include "pair.h"
//kaka
template <typename T>
class priority_queue {
private:
	pair* arr;
	int capacity = 1;
	int size = 0;
public:
	priority_queue() {
		arr = new pair[capacity];
	}
	~priority_queue() {
		delete[] arr;
	}
	void pop() {
		pair* parr = new pair[size - 1];
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
	pair *top() {
		return &arr[0];
	}
	void push(pair wv) {
		if (size == capacity) {
			capacity *= 2;
		}
		pair* parr = new pair[capacity];
		for (int i = 0; i < size; i++) {
			parr[i] = arr[i];
		}
		*(parr + size)  = wv;
		size++;
		delete[] arr;
		arr = parr;
	}
	bool empty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}


};