/*************************************************************************
    > File Name: 44.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月16日 星期五 20时12分37秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAX_N 1000000

int num[MAX_N + 5] = {0};
int sum[MAX_N + 5] = {0};
vector<int> vec;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sum[i] = 1;
	}	
	for (int i = 1; i < n; i++) {
		if (num[i] > vec.back()) {
			vec.push_back(num[i]);
		} else {
			int left = 0;
			int right = vec.size();
			int mid;
			while (left <= right) {
				mid = (left + right) >> 1;
				if (vec[mid] < num[i]) left = mid - 1;
				else right = mid;
			}
			vec.insert(left, num[i]);
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (vec[i] > ans) ans = vec[i];
	}
	cout << ans << endl;
	return 0;
}
