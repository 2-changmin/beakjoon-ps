#pragma warning (disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
    int count = 0;
    char a[1000004];
    scanf("%[^\n]s", a);
    if (a[0] != ' ') count++;
    for (int i = 1; i<strlen(a); i++) {
        if (a[i - 1] == ' ' && a[i] != ' ') count++;
    }
    printf("%d", count);
    return 0;
}
