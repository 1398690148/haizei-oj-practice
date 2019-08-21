/*************************************************************************
    > File Name: 235.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 20时05分38秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> chosen;

void calc(int x) {
	if (x == 0) {
		int i;
		for (i = chosen.size() - 1; i >= 0; i--) {
			i != 0 && cout << " ";
			cout << chosen[i];		
		}
		i != 0 && cout << endl;
		return ;
	}
	calc(x - 1);
	chosen.push_back(x);
	calc(x - 1);
	chosen.pop_back();
}

int main() {
	cin >> n;
	calc(2);
	return 0;
}
