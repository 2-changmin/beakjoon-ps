#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int a;
    int sum = 0;
    int result = 0;
    int n[10] = { 0, };
    for (int i = 0; i <= 9; i++) {
        scanf("%d", &a);
        n[i] = a % 42;
    }
    for (int i = 0; i <= 9; i++) {
        sum = 0;
        for (int j = i + 1; j <= 9; j++) {
            if (n[i] == n[j])
                sum++;
        }
        if (sum == 0)result++;

    }

    printf("%d", result);

    return 0;
}
