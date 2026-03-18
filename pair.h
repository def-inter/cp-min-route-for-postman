#pragma once
struct pair {
	long long int weight;
	int vertex;
	bool operator >(pair& other) {
		if (weight != other.weight)return weight > other.weight;
		else vertex > other.vertex;
	}
};