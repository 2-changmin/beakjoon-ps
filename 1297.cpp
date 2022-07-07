#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*int main() {
	int d, h, w;
	double a, b;
	scanf("%d %d %d", &d, &h, &w);
	int i = 1;
	while (1) {
		a = pow((h * i), 2);
		b = pow((w * i), 2);
		if (pow(d, 2) == a+b) {
			printf("%d %d", (int)sqrt(a), (int)sqrt(b));
			break;
		}
			i++;
	}
	return 0;
}*/

int main() {
	int d, h, w;
	double c, t1, t2;
	scanf("%d %d %d", &d, &h, &w);
	c = sqrt(h * h + w * w);
	t1 = h * d / c;
	t2 = w * d / c;

	printf("%d %d\n", (int)t1, (int)t2);
	return 0;
}
