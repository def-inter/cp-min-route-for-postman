#include <iostream>
#include "pair.h"
#include "vector.h"
#include "matrix.h"
#include "priority_queue.h"

double min(double el1, double el2);

int main() {
	priority_queue<pair> a;
	a.push({ 345, 6 });
	a.push({ 300, 60 });
	
	
	return 0;
}





double min(double el1, double el2) {
	if (el1 > el2) {
		return el2;
	}
	else {
		return el1;
	}
}