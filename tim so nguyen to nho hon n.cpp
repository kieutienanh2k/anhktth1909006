#include<stdio.h>
int main ()
{   int n,i,so_dem=0,j;
    printf ("nhap n=");
	scanf("%d",&n);
	for ( i=2;i<n;i++)
	{
	   for (j=1;j<=i/2;j++)
	   {
	   	if (i%j==0) 
	    	{
	    		so_dem++;
			
		    }
		    
		}
		 
		if (so_dem==1) 
		{
			printf ("%d\t",i); 
		}
		 so_dem=0; 
	 }  
    
	 return 0; 

 } 
