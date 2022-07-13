#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define size 10001

int a[size] = { 0, };

int main() {
	int n, num;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		
	}
	for (int i = 0; i <= size; i++) {
		if (a[i] == 0) continue;

		for (int j = 0; j < a[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}