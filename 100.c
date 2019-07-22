#include <stdio.h>
int main() {
	double money = 0;
	scanf("%lf", &money);
	double pre_money = money;
	money = money * 1.00417;
	for(int i = 0; i < 5; i++)
	money = (money + pre_money) * 1.00417;
	printf("$%.2f", money);
	return 0;
}
