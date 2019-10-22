#include<stdio.h>
int main ()
{
	int a[5];
	 for (int i=0;i<5;i++)
	{
		printf ("nhap phan tu thu %d:",i);
		scanf ("%d",&a[i]);
	}
	for (int i=5;i>0;i--)
	{
		if (a[i]%2!=0)
		{
			printf ("so le cuoi cung la:%d",a[i]);
			break;
		}
	}
    return 0;	
}
