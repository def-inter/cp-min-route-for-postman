#pragma once
#include "matrix.h"
#include "queue.h"
#include "vector.h"
void bfs(matrix<long long int>& a, int src, int size) {
	vector<bool> visited(size);
	vector<int> d(size);
	queue<int> q;
	d[src] = 0;
	visited[src] = 1;
	q.push(src);
	while (!q.empty()) {
		int u = q.top();
		q.pop();
		
		for (int i = 0; i < size;i++) {
			if (a[u][i] == 1 && visited[i] == 0) {
				d[i] = d[u] + 1;
				q.push(i);
				visited[i] = 1;
			}
		}

	}
	for (int i = 0; i < size; i++) {
		std::cin >> d[i];
	}

}