#pragma once
#include "pair.h"

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
			pair* temp = new pair[capacity];
			temp[size] = { wv.weight,wv.vertex };
			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			delete[] arr;
			arr = temp;
		}
		else {
			arr[size] = { wv.weight,wv.vertex };
		}	
		int i = size;
		size++;
		while (i > 0) {
			int parent = (i - 1) / 2;
			if (arr[i] > arr[parent]) {
				swap(arr[i], arr[parent]);
				i = parent;
			}
			else {
				break;
			}
		}
		return;
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