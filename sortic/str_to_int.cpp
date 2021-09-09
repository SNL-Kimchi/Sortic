#include "functions.h"
int str_to_int(string str) {
	int len = ft_len(str);
	int res = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '-')
		{
			i++;
			len--;
		}
		res += (str[i] - 48) * (ft_pow(10, len - 1));
		len--;
	}
	if (str[0] == '-')
	{
		res = res * -1;
	}
	return res;
}