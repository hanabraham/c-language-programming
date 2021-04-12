#include <stdio.h>
#include <string.h>
char *f(char *s, int m, int n);
int main()
{
	int m, n;
	char s1[20];
	scanf("%d,%d", &m, &n);
	scanf("%s", s1);
	printf("%s\n", f(s1, m, n));
	return 0;
}
char *f(char *s, int m, int n)
{
	int i, j = 0;
	char t[20];
	for (i = m; i <= m + n - 1; i++, j++)
		t[j] = s[i];
	t[j] = '\0';
	strcpy(s, t);
	return (s);
}
// 2,3
// computer
// mpu