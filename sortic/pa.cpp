#include "functions.h"
void pa(vector<int>& a, vector <int>& b) {
	vector <int> c;
	ft_rev_list(a);
	a.push_back(b[0]);
	ft_rev_list(a);
	for (int i = 0; i < b.size() - 1; i++) {
		c.push_back(b[i + 1]);
	}
	b = c;
}