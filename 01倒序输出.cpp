#include<stdio.h>
int main()
{
	int i,a[5],j;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=4;i>=0;i--)
		printf("%3d",a[i]);

}
// 1 2 3 4 5
//   5  4  3  2  1