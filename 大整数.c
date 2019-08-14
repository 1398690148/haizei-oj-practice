/*************************************************************************
    > File Name: 大整数.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月07日 星期三 20时08分59秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char num[205];
int res[205];
int main() {    
    for (int i = 0; i < 2; ++i) {
        scanf("%s", num);
    	int len = strlen(num);
        if (len > res[0]) res[0] = len;
    	for (int i = 0; i < len; ++i) {
        	res[len - i] += (num[i] - '0');
    	}
        for (int i = 1; i <= res[0]; ++i) {
            if (res[i] < 10) continue;
            res[i + 1] = res[i] / 10;
            res[i] %= 10;
            res[0] += (i == res[0]);
        }
    }
    for (int i = res[0]; i > 0; --i) {
		printf("%d", res[i]);
    }
    printf("\n");
    return 0;
}
