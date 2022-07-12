#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int arr[1001], k = 1, n, m, sum = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			arr[k] = i;
			if (k > 1000) {
				break;
			}
			k++;
		}
	}
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++) {
		sum += arr[i];
	}
	printf("%d", sum);
	return 0;
}