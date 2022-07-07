#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    int a[1000] = { 0 };
    int max = 0;
    float avg = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) max = a[i];
    }
    for (int k = 0; k < n; k++) {

        avg += (float)a[k] / max * 100;
    }

    printf("%f\n", avg / n);

    return 0;
}
