#ifndef sortic
#define sortic
#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
//осн.функции
int sortic_act(vector<int>& a, vector <int>& b);
//(доп.оценка)
int entry(vector<int>& a);
int output(vector<int>& a, vector <int>& b);
//доп.функции
int ft_pow(double a, int b);
int ft_len(string str);
int str_to_int(string);
void ft_rev_list(vector <int>& mass);
//функции сортировки
void sa(vector<int>&a);
void sb(vector<int>& b);
void ss(vector<int>& a, vector <int>& b);
void pa(vector<int>& a, vector <int>& b);
void pb(vector<int>& a, vector <int>& b);
void ra(vector<int>& a);
void rb(vector<int>& b);
void rr(vector<int>& a, vector <int>& b);
void rra(vector<int>& a);
void rrb(vector<int>& b);
void rrr(vector<int>& a, vector <int>& b);
//стадия создания:
#endif

