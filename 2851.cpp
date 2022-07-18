#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int a[11];
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", a+i);
	}
	for (int i = 0; i < 10; i++) {
		if (abs(sum + a[i] - 100) <= abs(sum - 100)) {
			sum += a[i];
		}
		else
			break;
	}
	printf("%d", sum);

	return 0;
}