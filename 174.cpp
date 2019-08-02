/*************************************************************************
    > File Name: 174.cpp
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月31日 星期三 13时49分38秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	string str;
	char c = 32;
	cin >> [^\n]str;
	
	cout << str.length() << endl;
	for (int i = 0; str[i]; i++) {
		int pos = str.find(c);
		cout << "i: "<< pos << endl;
		if(pos == -1) break;
		str.replace(pos - 1, pos, "%");
	}
	cout << str << endl;
	return 0;
}

