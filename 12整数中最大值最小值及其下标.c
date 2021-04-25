#include <stdio.h>
int main()
{
    int a[10], max, min, i, s, t;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    max = min = a[0];
    s = t = 0;
    for (i = 1; i < 10; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            s = i;
        }
        if (min > a[i])
        {
            min = a[i];
            t = i;
        }
    }
    printf("最大值是a[%d]=%d,最小值是a[%d]=%d", s, max, t, min);
}