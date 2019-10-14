#include<stdio.h>
int main  ()
{
	int n,giai_thua;
	printf ("nhap n=") ;
	scanf ("%d",&n);
	giai_thua=1;
	for (int i=1;i<=n;i++) 
	{
		giai_thua*= i; 
	}
	printf ("n!=%d",giai_thua); 
	return 0; 
	 
 } 
