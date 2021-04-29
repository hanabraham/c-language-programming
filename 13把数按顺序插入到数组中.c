#include <stdio.h>
int main()
{
    int i, x;
    int a[11] = {20, 11, 8, 7, 5, 3, 0, -2, -5, -11};
    for (i = 0; i <= 9; i++)
        printf("%3d", a[i]);
    printf("\n");
    scanf("%d", &x);
    for (i = 9; i >= 0; i--)
        if (x > a[i])
            a[i + 1] = a[i];
        else
        {
            a[i + 1] = x;
            break;
        }
    if (i == -1)
        a[0] = x;
    for (i = 0; i <= 10; i++)
        printf("%3d", a[i]);
}