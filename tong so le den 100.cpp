#include<stdio.h>
int main ()
{
	int tong;
	tong=0;
	for (int i=1;i<200;i++) 
	{
		if (i%2!=0) 
		{
			tong +=i; 
		}
	}
	printf ("tong=%d",tong);
	return 0; 
 } 
