#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int t;
	int a,b;
	char c;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %c %d", &a, &c, &b);
		printf("%d\n", a + b);
	}
	return 0;
}