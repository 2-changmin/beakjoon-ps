#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (h == 0) {
		h = 24;
	}
	if (m >= 45) {
		m = m - 45;
	}
	else if (m < 45) {
		m = 45 - m;
		m = 60 - m;
		h--;
	}
	printf("%d %d", h, m);

	return 0;
}