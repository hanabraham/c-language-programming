// #include <stdio.h>
// int main()
// {
// 	int f1 = 1, f2 = 1, f3;
// 	int i;
// 	printf("%d,%d,", f1,f2);
// 	for (i = 1; i <= 10; i++)
// 	{
// 		f3 = f1 + f2;
// 		printf("%d,", f3);
// 		f1 = f2;
// 		f2 = f3;
// 	}
// }
// 1,1,2,3,5,8,13,21,34,55,89,144,

// #include <stdio.h>
// int main()
// {
// 	int f1 = 1, f2 = 1;
// 	int i;

// 	for (i = 1; i <= 10; i++)
// 	{
// 		printf("%d,%d,", f1, f2);
// 		f1 = f1 + f2;
// 		f2 = f1 + f2;
// 	}
// }
// 1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,

// #include <stdio.h>
// int main()
// {
// 	int i, f[20] = {1, 1};
// 	for (i = 2; i < 20; i++)
// 		f[i] = f[i - 2] + f[i - 1];
// 	for (i = 0; i < 20; i++)
// 		printf("%d,", f[i]);
// 	return 0;
// }
// 1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,

// #include <stdio.h>
// int fac(int);
// int main()
// {
// 	int n, i;
// 	scanf("%d", &n);
// 	for (i = 1; i < n; i++)
// 		printf("%d,", fac(i));
// 	return 0;
// }
// int fac(int n)
// {
// 	int f;
// 	if (n < 0)
// 		printf("ERROR!");
// 	else if (n == 1 || n == 2)
// 		f = 1;
// 	else
// 		f = fac(n - 1) + fac(n - 2);
// 	return f;
// }
// 10
// 1,1,2,3,5,8,13,21,34,