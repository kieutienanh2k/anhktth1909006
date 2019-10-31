#include <stdio.h>
int main ()
{
	int a1=0,a2=1,a3;
	printf ("day fibonacci tu 1 den 100 la:\n");
	
	for(int i=2;a2+a3<=100;i++)
	{	
		a1=a2;
		a2=a3; 
		a3=a1+a2;
		printf ("%d\t",a3);		
    }
	printf ("%d\t",a3); 
    return 0; 
 } 
