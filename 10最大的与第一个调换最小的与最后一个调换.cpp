#include<stdio.h>
int main(void)
{
	int i,index1=0,index2=0,temp;
	int s[10];
	printf("Please input 10 integers:");
	for(i=0;i<10;i++)
		scanf("%d",&s[i]);
	for(i=1;i<10;i++){
		if(s[i]>s[index1])
			index1=i;
		if(s[i]<s[index2])
			index2=i;
	}
	temp=s[index1];
	s[index1]=s[0];
	s[0]=temp;
	temp=s[index2];
	s[index2]=s[9];
	s[9]=temp;
	for(i=0;i<10;i++)
		printf("%d ",s[i]);
	printf("\n");
	return 0;
}
// Please input 10 integers:2 5 6 3 4 8 9 2 1 0
// 9 5 6 3 4 8 2 2 1 0