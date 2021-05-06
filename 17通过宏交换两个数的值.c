#include "stdio.h"
#define S(a, b) t = a; a = b; b = t
int main()
{
    int x = 4, y = 123, t;
    printf("x = %d\ty = %d\n", x, y);
    S(x, y);
    printf("x = %d\ty = %d\n", x, y);
    return 0;
}

// x = 4   y = 123
// x = 123 y = 4
