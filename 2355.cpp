#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
//시그마 공식 이용
int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a <= b) {
		printf("%lld", (a + b) * (b - a + 1) / 2); //(a+b) 는 처음수와 마지막 수를 합한 값 ,, (b-a+1)은 a와 b사이의 수의 개수를 나타낸 값
	}
	if (a >= b) {
		printf("%lld", (a + b) * (a - b + 1) / 2);
	}
	return 0;
}