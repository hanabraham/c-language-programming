#include <stdio.h>
int hcf(int u, int v);
int lcd(int u, int v, int h);
int main()
{

    int u, v, h, l;
    scanf("%d,%d", &u, &v);
    h = hcf(u, v);
    printf("最大公约数=%d", h);
    l = lcd(u, v, h);
    printf("最小公倍数数=%d", l);
}
int hcf(int u, int v)
{
    int t, r;
    if (v > u)
    {
        t = u;
        u = v;
        v = t;
    }
    while ((r = u % v) != 0)
    {
        u = v;
        v = r;
    }
    return v;
}
int lcd(int u, int v, int h)
{
    return (u * v / h);
}
// 8,4
// 鏈€澶у叕绾︽暟=4鏈€灏忓叕鍊嶆暟鏁?8