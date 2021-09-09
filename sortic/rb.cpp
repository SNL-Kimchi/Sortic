#include "functions.h"
void rb(vector<int>& b) {
	int saver = b[(b.size()) - 1];
	for (int i = b.size() - 1; i > 0; i--) {
		int saver2 = b[i - 1];
		b[i - 1] = saver;
		saver = saver2;
	}
	b[b.size() - 1] = saver;
}