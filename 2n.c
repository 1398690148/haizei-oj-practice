/*************************************************************************
    > File Name: 2n.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 21时02分12秒
 ************************************************************************/

#include <stdio.h>

int num[200];
int main() {
    int n;
    scanf("%d", &n);
    num[1] = 2;
    num[0] = 1;
    for (int i = 1; i < n; ++i) {
		for (int j = 1; j <= num[0]; ++j) {
            num[j] *= 2;
        }
        for (int j = 1; j <= num[0]; ++j) {
            if (num[j] < 10) continue;
            num[j + 1] += num[j] / 10;
            num[j] %= 10;
            num[0] += (j == num[0]);
        }
    }
    for (int i = num[0]; i > 0; --i) {
        printf("%d", num[i]);
    }
    return 0;
}
