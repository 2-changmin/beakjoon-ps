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
/*#pragma warning (disable:4996)

#include <stdio.h.>

int main() {
    int a, b, c;
    int sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    int arr[51] = { a * b * c };
    for (int i = 0; i < 10; i++) {
        for (int k = 0; arr[k] != '\0'; k++) {
            if (arr[k] == i)  sum++;
               }
        printf("%d", sum);
    }

}*/

//에라토스테네스의 체

/*#include <stdio.h>
#include <math.h>

#pragma warning (disable:4996)
int num[1000002];
int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);
    for (int i = 1; i <= N; i++)
        num[i] = i;

    if (M == 1)
        M += 1;
    for (int i = 2; i <= sqrt(N); i++)//무슨 수의 배수인지 확인
    {
        for (int j = i * i; j <= N; j += i)//
        {
            if (num[j] == 0)
                continue;
            num[j] = 0;
        }
    }
    for (int i = M; i <= N; i++)
    {
        if (num[i] != 0)
            printf("%d\n", num[i]);
    }
} */