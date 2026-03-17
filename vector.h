#pragma once
template <typename T>
class vector {
private:
	T* arr;
	int capacity;
	int size;

public:
	vector(int c) :capacity(c) {
		arr = new T[capacity];
		size = 0;
		for (int i = 0; i < capacity; i++) {
			arr[i] = T();
		}
	}
	~vector() {
		delete[] arr;
	}
	void push_back(T el) {
		if (capacity == size) {
			capacity *= 2;
			T* temp = new T[capacity];


			for (int i = 0; i < size; i++) {
				temp[i] = arr[i];
			}
			delete[] arr;
			arr = temp;
		}
		*(arr + size) = el;
		size += 1;
	}
	T& operator[](int index) {
		return arr[index];
	}

};