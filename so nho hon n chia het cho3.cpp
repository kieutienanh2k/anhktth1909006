#include <stdio.h> 
int main ()
{
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	for (int i=1;i<n;i++) 
	{
		if(i%3==0)
			printf ("nhung so chia het cho 3 la:%d\n",i);

	    
	}
	return 0; 
 } 
