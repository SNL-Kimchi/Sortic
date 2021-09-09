#include "functions.h"
int sortic_act(vector<int>& a, vector <int>& b) {
	int count = 0;
	int min = a[0];
	int len = a.size();
	for (int i = 0; i < len; i++) {
		for (int z = 0; z < a.size(); z++) {
			if (a[z] < min) {
				min = a[z];
			}
		}
		while (a[0] != min) {
			ra(a);
			count += 1;
			cout << count << ". ";
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 5));
			cout << "ra";
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cout << " ";

			output(a, b);
			cout << endl;
		}
		pb(a, b);
		count += 1;
		cout << count << ". ";
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 10));
		cout << "pb" << " ";
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		output(a, b);
		cout << endl;
		if (a.size() == 0) {

		}
		else {
			min = a[0];
		}


	}
	while (a.size() != len) {
		if (a.size() + 1 == len) {
			pa(a, b);
			count += 1;
			cout << count << ". ";
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
			cout << "pa ";
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			output(a, b);
			cout << endl;
		}
		else {
			pa(a, b);
			count += 1;
			cout << count << ". ";
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 12));
			cout << "pa" << " ";
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			output(a, b);
			cout << endl;
		}
}
	return 0;
}