#include "functions.h"
void ra(vector<int>& a) {
	int saver = a[(a.size())-1];
	for (int i = a.size()-1; i > 0; i--) {
		int saver2 = a[i - 1];
		a[i-1] = saver;
		saver = saver2;
	}
	a[a.size() - 1] = saver;
}
