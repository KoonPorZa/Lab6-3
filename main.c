#include <stdio.h>
int main(void) {
	int num, pnum;
	int n3, n5, n7;
  repeat:
	printf("\nEnter Number : ");
	scanf("%d", &num);
	n3 = num % 3;
	n5 = num % 5;
	n7 = num % 7;
	if (num < 0) {
  }	else if (num == 0) {
		goto repeat;
	} else if (n3 != 0 && n5 != 0 && n7 != 0 && num != 1) {
		for (int i = 1; i <= 15; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
		goto repeat;
	} else if (num == 3 || num == 5 || num == 7) {
		for (int i = 1; i <= 15; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
		goto repeat;
	} else if (num % 2 == 0) {
		for (int i = 1; i <= 15; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
		}
		goto repeat;
	} else {
		printf("Not prime number !!!");
		goto repeat;
	}
}