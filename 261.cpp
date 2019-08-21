/*************************************************************************
    > File Name: 261.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 19时40分42秒
 ************************************************************************/

#include <iostream>
#include <inttypes.h>
#include <vector>
using namespace std;

vector<int> vec;

void my_insert(int pos, int x) {
	vec.insert(vec.begin() + pos, x);
}

void my_delete(int pos) {
	vec.erase(vec.begin() + pos - 1);	
}

int max_si(int tail) {
	int sum = 0, max = INT32_MIN;
	for (int i = 0; i < tail; i++) {
		sum += vec[i];
		if (sum > max) {
			max = sum;
		}
	}
	return max;
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
					  current_pos++;
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
			case 'Q': cout << max_si(x) << endl;
					  /*for (int i = 0; i < vec.size(); i++) {
						cout << vec[i] << " ";
					  }
					  cout << endl;*/
					  break;
		}
	}
	return 0;
}
