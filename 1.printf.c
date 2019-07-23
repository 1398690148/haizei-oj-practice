/*************************************************************************
    > File Name: 1.printf.c
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2019年07月23日 星期二 16时48分48秒
 ************************************************************************/

#include<stdio.h>
#define swap(a, b) {\
	__typeof(a) temp = a;\
	a = b; b = temp;\
}
int main() {
	int n;
	char str[100], buff[100], *p = str, *q = buff;
	scanf("%d", &n);//stdin标准输入
	printf("%04d\n", n);//stdout标准输出
	//stderr标准错误输出		
	//printf("EOF = %d stdin = %d stdout = %d stderr = %d", 
	//			EOF, *stdin, *stdout, *stderr);
	sprintf(str, "%06d", n);
	printf("str = %s", str);
	if (n & 1) {
		sprintf(q, "(%s)", p);
		swap(p, q);
	}
	if (n & 2) {
		sprintf(q, "[%s]", p);
		swap(p,q);
	}
	if (n & 3) {
		sprintf(q, "{%s}", p);
		swap(p, q);
	}
	FILE *fout = fopen("output", "w");//文件权限
	fprintf(fout, "%s\n", p);
	fprintf(stdout, "%s\n", p);
	fprintf(stderr, "%s\n", p);
	printf("%s\n", p);
	return 0;
}
