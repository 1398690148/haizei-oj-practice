/*************************************************************************
    > File Name: EP-47-01.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月16日 星期五 19时57分45秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000

int prime[MAX_N + 5] = {0};

void init() {
	for (int i = 2; i <= MAX_N; i++) {
		if (prime[i]) continue;
		for (int j = i; j <= MAX_N; j += i) {
			prime[j] += 1;
		}		
	}
	return ;
}
int main() {
	init();
	for (int i = 2; i < MAX_N; i++) {
		int flag = 1;
		for (int k = 0; k < 4 && flag; k++) {
			flag = (prime[i + k] == 4);
		}
		if(flag) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
