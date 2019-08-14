/*************************************************************************
    > File Name: 463.c
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月12日 星期一 20时43分47秒
 ************************************************************************/

#include <stdio.h>

struct Point {
	int left;
	int right;
	int up;
	int bottom;
};

int main() {
	struct Point p1, p2;
	scanf("%d%d%d%d", &p1.left, &p1.right, &p1.up, &p1.bottom);
	scanf("%d%d%d%d", &p2.left, &p2.right, &p2.up, &p2.bottom);

	return 0;
}
