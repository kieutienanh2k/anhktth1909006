#include <stdio.h> 
int main  ()
{
	int n,Tong=0;
	printf ("nhap n:") ;
	scanf ("%d",&n) ;
	for (int i=1;i<n;i++) 
	{
		if (n%i==0)
		{
			Tong +=i; 
			
		} 
	}
	if (Tong=n) 
	{
		printf ("%d la so hoan hao.",n); 
	}
	else 
	{
		printf ("%d ko la so haon hao.",n);  
	 } 
	 return 0; 
}
