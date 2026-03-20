#include <iostream>
#include "pair.h"
#include "vector.h"
#include "matrix.h"
#include "priority_queue.h"
#include "stack"
#include "queue"
#include "dfs.h"
#include "bfs.h"
#include "dijkstra.h"
#include "tsp.h"

template<typename T>
T min(T a, T b);

template<typename T>
void swap(T& a, T& b);

int main() {
	int src;
	matrix<long long int> a(6, 6);
	std::cin >> src;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			long long int el;
			std::cin >> el;
			a[i][j] = el;
		}
	}
	//bfs(a,2,6);
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