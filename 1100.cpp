#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	char a[9][9];
	int count = 0;
	for (int i = 0; i < 8; i++) {
		scanf("%s", a[i]);
	}
	for (int i = 0; i < 8; i++) {
		for (int k = 0; k < 8; k++) {
			if ((i + k) % 2 == 0 && a[i][k] == 'F')
				count++;
		}
	}
	printf("%d", count);
	return 0;
}