#include "functions.h"
void ft_rev_list(vector <int>& mass) {
	int frbegin = 0;
	int frend = mass.size() - 1;
	int saver = 0;
	//for (int i = mass.size()-1; i >= 0; i--) 
	for (int i = 0; i < (mass.size() / 2); i++) {
		int saver = mass[frbegin];
		mass[frbegin] = mass[frend];
		mass[frend] = saver;
		frend -= 1;
		frbegin += 1;

	}
}