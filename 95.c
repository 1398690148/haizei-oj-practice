#include <stdio.h>



int main() {
	int n;
	scanf("%d", &n);
	int a = n / 10;
	n = n % 10 * 10 + a;
	printf("%d\n", n);

	return 0;
}
