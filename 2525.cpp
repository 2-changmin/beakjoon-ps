#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int s, b, p;
    scanf("%d %d %d", &s, &b, &p);

    int k;
    k = p / 60;
    p = p - (k * 60);

    s = s + k;
    b = b + p;
    if (b >= 60) {
        b = b - 60;
        s = s + 1;
    }

    if (s >= 24) {
        s = s - 24;
    }
    printf("%d %d", s, b);

    return 0;
}