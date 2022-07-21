#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b, a % b);
	}
}

int main()
{
	int c, b;
	int l;
	scanf("%d %d", &c, &b);
	int g = gcd(c, b);
	printf("%d\n", g);
	printf("%d", g * (c / g) * (b / g));

	return 0;
}
