/*************************************************************************
    > File Name: 172.cpp
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 19时00分29秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str[10];
	string strs[10];
	string min = "ZZZ";
	for(int i = 0; i < 10; i++) {
		cin >> str[i];
	}
	for(int j = 0; j < 10; j++) {
		int i;
		for(i = 0; i < 10; i++) {
			if (min.compare(str[i])) {
				min = str[i];
			}
		}
		str[i] = "";
		strs[j] = min;
	}
	for(int i = 9; i >= 0; i++)
	cout << strs[1] << endl;
	return 0;
}
