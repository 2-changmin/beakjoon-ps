#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int m, n;
	int min = 10001;
	int sum = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			if (i == k * k) {
				sum += k*k;
				if (k < min) min = k;
			}
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d", sum,min*min);
	return 0;
}