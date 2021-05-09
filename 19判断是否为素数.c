#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
        if (n % i == 0)
            break;
    if (i >= n)
        printf("YES");
    else
        printf("NO");
}

// 求100~200之间的全部素数
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, k, m = 0;
    for (n = 101; n <= 200; n += 2)
    {
        k = sqrt(n);
        for (i = 2; i <= k; i++)
            if (n % i == 0)
                break;
        if (i >= k+1)
            printf("%d,",n);
    }
}
// 101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,