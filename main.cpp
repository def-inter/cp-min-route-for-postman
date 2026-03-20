#include <iostream>
#include "pair.h"
#include "vector.h"
#include "matrix.h"
#include "priority_queue.h"
#include "stack"
#include "queue"

template<typename T>
T min(T a, T b);

template<typename T>
void swap(T& a, T& b);

int main() {
	priority_queue<pair> pq;
	pq.push({ 234,56 });
	pq.push({ 234,55 });
	pq.push({ 234,54 });
	pq.push({ 2555,2 });
	pq.push({ 23,11 });
	std::cout << pq.top()->weight;
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