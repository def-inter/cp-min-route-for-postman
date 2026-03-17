#pragma once
template <typename T>
class matrix {
private:
	T** arr;
	int rows;
	int cols;
public:
	matrix(int r, int c) : rows(r), cols(c) {
		arr = new T * [rows];
		for (int i = 0; i < rows; i++) {
			arr[i] = new T[cols];
			for (int j = 0; j < cols; j++) {
				arr[i][j] = T();
			}
		}
	}
	~matrix() {
		for (int i = 0; i < rows; i++) {
			delete[] arr[i];
		}
		delete[] arr;
	}
	T* operator[](int index) {
		return arr[index];
	}
};
