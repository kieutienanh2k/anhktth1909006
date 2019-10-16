#include<stdio.h>
int main ()
{   int ary[20]; 
	for (int i=0;i<20;i++)
	{
		printf ("nhap phan tu thu %d:\n",i);
    	scanf ("%d",&ary[i]);
	 } 
	 for (int i=0;i<20;i++)
	 {  printf ("nhung so le la:"); 
	 	if (ary[i]%2!=0)
		 {
		 	printf ("%d\t",ary[i]); 
		  } 
	  }
	  return 0; 
 } 
