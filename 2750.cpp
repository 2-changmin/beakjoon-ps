#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n;
	int num[1001];
	int temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d\n", num[i]);

	return 0;
}