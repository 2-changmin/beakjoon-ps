#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n;
	scanf("%d", &n);
	int a;
	int max = -1000000;
	int min = 1000000;
	for (int k = 1; k <= n; k++) {
		scanf("%d", &a);
		if (a > max) max = a;
		if (a < min) min = a;
	}
	printf("%d %d", min, max);

	return 0;
}