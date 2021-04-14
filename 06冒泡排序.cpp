//1 2 3 4 6 7 8 9 10
#include <stdio.h>
int main()
{
	int i, a[10], j, t;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d,", a[i]);
}
// 10 9 8 7 6 5 4 3 2 1
// 1,2,3,4,5,6,7,8,9,10,
