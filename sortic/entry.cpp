#include "functions.h"
#include <iostream>
#include <string>
using namespace std;
int entry(vector<int>& a) {
	string str;
	string res ="";
	getline(cin, str);
	for (int i = 0; i < ft_len(str); i++) {
		while (str[i] != ' ') {
			if (i >= ft_len(str)) {
				break;
			}

			res += str[i];
			i++;
		}
		int s = str_to_int(res);
		a.push_back(s);
		res = "";
	}
	return 0;
}
//for (int i = 0; flag > 0; i++) {
//	cin >> temp;
	//if (temp[0] == '!') {
	//	break;
	//}
	//int s = str_to_int(temp);
	//a.push_back(s);
	//konv = "";