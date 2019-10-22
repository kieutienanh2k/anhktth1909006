#include<stdio.h>
int main ()
{
	int n,a[10],max=0,dem=0;
	printf ("nhap so phan tu n: %d",n);
	scanf ("%d",&n); 
	 for (int i=0;i<n;i++)
	{
		printf ("nhap phan tu thu %d:",i);
		scanf ("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]>0)
		{
			dem++; 
		}
		else 
		{
			dem=0; 
		 } 
		 if (dem>max)
		     max=dem; 
		  
	}
		
		   printf ("so luong so duong lien tiep nhieu nhat la:%d",max);
		   
	
	return 0;
}
