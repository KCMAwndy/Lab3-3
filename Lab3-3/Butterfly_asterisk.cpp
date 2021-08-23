#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y, num;
	scanf("%d", &num);
	for (y = 1; y < num * 2; y++) {
		for (x = 1; x < num * 2; x++) {
			if (x > y && y < num && x <= num) 				printf("  ");
			else if (x + y < num * 2 && y<num && x>num) 	printf("  ");
			else if (y > x && y > num && x >= num) 			printf("  ");
			else if (x + y > num * 2 && y > num && x < num) printf("  ");
			else 											printf("* ");
		}
		printf("\n");
	}
	return 0;
}