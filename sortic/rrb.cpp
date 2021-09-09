#include "functions.h"
void rrb(vector<int>& b) {
	int saver = b[0];
	for (int i = 0; i < b.size() - 1; i++) {
		int saver2 = b[i + 1];
		b[i + 1] = saver;
		saver = saver2;
	}
	b[0] = saver;
}