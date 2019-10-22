#include<stdio.h>
int main ()
{
	int n,a[10],max=0,Tong=0;
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
			Tong+=a[i]; 
		 } 
		 else
		 {
		 	Tong=0; 
		  }
		 if (Tong>max)
		 {
		 	max=Tong; 
		  } 
		 
	}
	printf ("Tong so duong lon nhat trong mang la: %d",max); 
 } 
