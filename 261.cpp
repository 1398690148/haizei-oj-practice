/*************************************************************************
    > File Name: 261.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 19时40分42秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;
vector<int>::iterator itr;

void my_insert(int pos, int x) {
	itr = vec.begin();	
	vec.insert(itr + pos, x);
}

void my_delete(int pos) {
	itr = vec.begin();
	vec.erase(itr + pos - 1);	
}

void max_si(int pos) {
	int max = 0, sum = 0;
	for (int i = 0; i < pos; i++) {
		sum += vec[i];
		if (sum > max) {
			max = sum;
		}
	}
	cout << max << endl;
}

int main() {
	int current_pos = 0;
	int n, x;
	char operat;
	cin >> n;
	while (n--) {
		cin >> operat;
		if (operat == 'I' || operat == 'Q') {
			cin >> x;
		}
		switch (operat) {
			case 'I': my_insert(current_pos, x);
					  ++current_pos;
					  break;
			case 'D': my_delete(current_pos);
					  --current_pos;
					  break;
			case 'L': if (current_pos > 0)
						--current_pos;
					  break;
			case 'R': if (current_pos < vec.size())
						++current_pos;
					  break;
			case 'Q': max_si(current_pos);
					  break;
		}
	}
	return 0;
}
