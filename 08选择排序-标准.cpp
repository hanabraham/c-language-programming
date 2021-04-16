#include <stdio.h>
int main()
{
	int a[10];
	int j, i, t, k;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 9; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
			if (a[j] < a[k])
				k = j;
		if (k != i)
		{
			t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d,", a[i]);
	return 0;
}
// 10 9 8 7 6 5  4 3 2 1
// 1,2,3,4,5,6,7,8,9,10,
