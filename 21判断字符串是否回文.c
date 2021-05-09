// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[80];
//     int i,j;
//     gets(s);
//     j=strlen(s);
//     for(i=0;i<j/2;i++)
//         if(s[i]!=s[j-i-1]) break;
//     if(i<j/2) printf("bu shi");
//     else printf("SHI");
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[80];
//     int i,j;
//     gets(s);
//     j=strlen(s)-1;
//     for(i=0;i<j;i++,j--)
//         if(s[i]!=s[j]) break;
//     if(i<j) printf("bu shi");
//     else printf("SHI");
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char s[80], *p1, *p2, c;
    gets(s);
    p1 = s;
    p2 = s + strlen(s) - 1;
    for (; p1 < p2; p1++, p2--)
        if (*p1 != *p2)
            break;
    if (p1 < p2)
        printf("bu shi");
    else
        printf("SHI");
}