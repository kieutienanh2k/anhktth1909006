#include<stdio.h>
int main ()
{
	int ary[10];
	float TB;
	for (int i=0;i<10;i++) 
	{
		printf ("nhung phan tu thu %d\n",i) ;
		scanf ("%d",&ary[i]); 
	}
	for (int i=0;i<10;i++)
	{
	      TB +=ary[i]; 
	 }
	 printf ("TB=%f",TB);
	 return 0; 
	 
 } 
