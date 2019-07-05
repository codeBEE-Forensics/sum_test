#include "sum.h"

int sum(int n) {
/*
	int r = 0;

	for(int i = 1; i <= n; i++) {
		r += i;
	}

	return r;
*/

	return n*(n+1)/2; //O(1)
}

