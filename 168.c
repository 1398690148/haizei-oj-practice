/*************************************************************************
    > File Name: 168.c
    > Author: liqiang
    > Mail: 1398690148@163.com 
    > Created Time: 2019年07月29日 星期一 20时45分15秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char smallToBig(char c) {
	return c - 32;
}

char bigToSmall(char c) {
	return c + 32;
}

int main() {
	int n;
	char Name[100];
	char Names[][100] = {0};
	int j = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", Name);
		int len = strlen(Name);
		if(!(Name[0] >= 65 && Name[0] <= 91))
			Name[0] = smallToBig(Name[0]);
		for(int i = 1; i < len; i++) {
			if(!(Name[i] >= 97 && Name[i] <= 123))
				Name[i] = bigToSmall(Name[i]);
		}
		Names[j++] = Name;
	}
	
	return 0;
}
