#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int n; 
	int num;

	int a[10001] = { 0, };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		a[num] = a[num]+1;           // ++을 해주는 이유: 입력받은 n의 횟수만큼 num값을 입력을 받는데 그 중에서 입력을 받지 못한 정수는 제외하고 입력 받은 정수만 오름차순으로 정렬을 하기 위함이고 또한 동일한 수를 입력 받았을 때를 대비해 a[num]++을 해서 나중에 반복하는 횟수를 정해주기 위함이다.
	}

	for (int i=1; i < 10001; i++) {
		for (int j = 1; j <= a[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}
