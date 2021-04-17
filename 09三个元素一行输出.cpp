#include <stdio.h> 
#include <math.h>
int main( ) 
{ 
	int a[10],i; 
    for(i=0; i<10; i++)  
		scanf( "%d",  &a[i] ); 
    for(i=1; i<=10; i++) 
    { 
		if(  i%3==0  )
    		printf( "%3d\n" ,  a[i-1]  ) ; 
    	else printf( "%3d",a[i-1]); 
    } 
                
}

