#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int a[9];
	for (int i = 0; i < 8; i++) {
		scanf("%d", a);
	}
	for (int i = 0; i < 8; i++) {
		if (a[i + 1] == a[i] + 1) printf("ascending");
		else if (a[i] == a[i] - 1) printf("descending");
		else printf("mixed");
	}
	return 0;
}