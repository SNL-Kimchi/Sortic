#include "functions.h"
void pb(vector<int>& a, vector <int>& b) {
	vector <int>c;
	ft_rev_list(b);
	b.push_back(a[0]);
	ft_rev_list(b);
	for (int i = 0; i < a.size()-1; i++) {
		c.push_back(a[i+1]);
	}
	a = c;
}