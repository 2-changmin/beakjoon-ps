#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int n;
    int s;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s);
        double avg = 0.00;
        int a[1000];
        int sum = 0;
        for (int k = 0; k < s; k++) {
            scanf("%d", &a[k]);
            sum += a[k];
        }
        avg = sum / s;
        int pp = 0;
        for (int k = 0; k < s; k++) {
            if (a[k] > avg) pp++;
        }
        printf("%.3lf%%\n", (double)pp * 100 / s);
    }

    return 0;
}