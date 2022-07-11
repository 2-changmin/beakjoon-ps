#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    int score;
    char a[80] = { 0 };
    scanf("%d", &n);
    int sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        score = 1;
        scanf("%s", a);
        for (int k = 0; a[k] != 0; k++) {
            if (a[k] == 'O') {
                sum += score;
                score++;
            }
            if (a[k] == 'X') score = 1;
        }
        printf("%d\n", sum);
    }

    return 0;
}