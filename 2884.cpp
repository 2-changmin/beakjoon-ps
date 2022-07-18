#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	m = m - 45;
	if (m < 0) {
		m = m + 60;
		h--;
	}

	if (h < 0) {
		h += 24;
	}
	
	printf("%d %d", h, m);

	return 0;
}
