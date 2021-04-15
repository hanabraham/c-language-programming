// 1 2 3 4 5 6 7 8 9 10
#include <stdio.h>
int main()
{
    int a[10];
    int i, j, k;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            if (a[i] < a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
    }
    for (i = 0; i < 10; i++)
        printf("%4d", a[i]);
    printf("\n");
}
