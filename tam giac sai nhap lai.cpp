#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("nhap 3 canh tam giac a,b,c:");
	scanf ("%d%d%d",&a,&b,&c);
	while (a+b<c&&a+c<b&&b+c<a)
	{
		printf ("nhap 3 canh tam giac a,b,c:");
		scanf ("%d%d%d",&a,&b,&c); 
	 } 
	 return 0; 
 } 
