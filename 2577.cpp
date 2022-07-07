#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int a, b, c;
    int sum;
    int arr[10] = { 0 };
    int num;
    scanf("%d %d %d", &a, &b, &c);
    sum = a * b * c;
    while (sum > 0)
    {
        num = sum % 10;
        arr[num]++;
        sum /= 10;
    }
    for (int i = 0; i <= 9; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
