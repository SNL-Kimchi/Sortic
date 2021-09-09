#include "functions.h";
void sb(vector<int>& b) {
	int saver = b[0];
	b[0] = b[1];
	b[1] = saver;
}