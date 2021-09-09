#include "functions.h";
void sa(vector<int>&a) {
	int saver = a[0];
	a[0] = a[1];
	a[1] = saver;
}