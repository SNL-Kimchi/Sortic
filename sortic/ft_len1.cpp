#include "functions.h"
int ft_len1(string str) {
	int i = 0;
	while (str[i] != '  ') {
		i++;
	}
	return i;
}