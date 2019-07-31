/*************************************************************************
    > File Name: 134.1.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年07月27日 星期六 16时17分22秒
 ************************************************************************/

#include<stdio.h>
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for(int i = ((a - 1) / 11 + 1) * 11, j = 0;i <= b; i += 11, j += 1) {
		j && cout << " ";
		cout << i;
	}
	return 0;
}
