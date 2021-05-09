// #include <stdio.h>
// int inv(int x[], int n);
// int main()
// {
//     int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     inv(a, 10);
//     for (i = 0; i < 10; i++)
//         printf("%d,", a[i]);
//     return 0;
// }
// int inv(int x[], int n)
// {
//     int temp, i, j, m;
//     m = (n - 1) / 2;
//     for (i = 0; i <= m; i++)
//     {
//         j = n - 1 - i;
//         temp = x[i];
//         x[i] = x[j];
//         x[j] = temp;
//     }
// }

// #include <stdio.h>
// int inv(int *x, int n);
// int main()
// {
//     int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     inv(a, 10);
//     for (i = 0; i < 10; i++)
//         printf("%d,", a[i]);
//     return 0;
// }
// int inv(int *x, int n)
// {
//     int *p, temp, *i, *j, m;
//     m = (n - 1) / 2;
//     i = x;
//     j = x + n - 1;
//     p = x + m;
//     for (; i <= p; i++, j--)
//     {
//         temp = *i;
//         *i = *j;
//         *j = temp;
//     }
// }
// 10,9,8,7,6,5,4,3,2,1,

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *p1, *p2, c, s[50];
//     scanf("%s", s);
//     p1 = s;
//     p2 = s + strlen(s) - 1;
//     for (; p1 < p2; p1++, p2--)
//     {
//         c = *p1;
//         *p1 = *p2;
//         *p2 = c;
//     }
//     printf("%s", s);
// }
// 12345678910
// 01987654321

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[80], t;
//     int i, j;
//     gets(s);
//     j = strlen(s) - 1;
//     for (i = 0; i < j; i++, j--)
//     {
//         t = s[i];
//         s[i] = s[j];
//         s[j] = t;
//     }
//     printf("%s", s);
// }
// 12345678910
// 01987654321

// 123 45 789
// 987 54 321

// 1 23 1 46 7891
// 1987 64 1 32 1

#include <stdio.h>
#include <string.h>
int main()
{
    char s[80], t;
    int i, j;
    gets(s);
    j = strlen(s);
    for (i = 0; i < j / 2; i++)
    {
        t = s[i];
        s[i] = s[j - i - 1];
        s[j - i - 1] = t;
    }
    printf("%s", s);
}
// 12345678910
// 01987654321

// 123 45 789
// 987 54 321

// 1 23 1 46 7891
// 1987 64 1 32 1