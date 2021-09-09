#include "functions.h"
void rra(vector<int>& a) {
	int saver = a[0];
	for (int i = 0; i < a.size()-1; i++) {
		int saver2 = a[i + 1];
		a[i + 1] = saver;
		saver = saver2;
	}
	a[0] = saver;
}