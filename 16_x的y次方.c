#include <stdio.h>
int main()
{
    int x, y, i, s;
    scanf("%d,%d", &x, &y);
    for (i = 1, s = x; i < y; i++)
        s = s * x;
    printf("%d的%d次方是%d", x, y, s);
}
