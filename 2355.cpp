#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//�ñ׸� ���� �̿�
int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a <= b) {
		printf("%lld", (a + b) * (b - a + 1) / 2); //(a+b) �� ó������ ������ ���� ���� �� ,, (b-a+1)�� a�� b������ ���� ������ ��Ÿ�� ��
	}
	if (a >= b) {
		printf("%lld", (a + b) * (a - b + 1) / 2);
	}
	return 0;
}