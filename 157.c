#include<stdio.h>

int main() {
	int n;
	char c = 'A';
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			printf(" ");
		}
		for(int k = 0; k < n - i; k++) {
			printf("%c", c);
			c = c + 1;
		}
		c = c - 2;
		for(int k = 0; k < n - i - 1; k++) {
			printf("%c", c);
			c = c - 1;
		}
		printf("\n");
		c = c + 2;
	}
	c = c - 2;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for(int k = 0; k < i + 1; k++) {
			printf("%c", c);
			c = c + 1;
		}
		c = c - 2;
		for(int k = 0; k < i; k++) {
			printf("%c", c);
			c = c - 1;
		}
		printf("\n");
	}
}

