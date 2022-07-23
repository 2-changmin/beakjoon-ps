#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a = 0;
	int n, max = 0;
	for (int k = 1; k <= 9; k++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			a = k;
		}
	}
	printf("%d\n", max);
	printf("%d", a);
	return 0;
}