#include <iostream>
#include "pair.h"
#include "vector.h"
#include "matrix.h"
#include "priority_queue.h"

template<typename T>
T min(T a, T b);

template<typename T>
void swap(T& a, T& b);


int main() {
	priority_queue<pair> pq;
	int a = 7;
	int b = 90;
	swap(a,b);
	std::cout << a << '\n' << b;
	
	
	
	return 0;
}




template<typename T>
T min(T a, T b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}