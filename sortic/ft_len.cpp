#include "functions.h"
using namespace std;
int ft_len(string str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}