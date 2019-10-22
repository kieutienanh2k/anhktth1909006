#include<stdio.h>
int main ()
{
	int n;
	printf ("nhap so phan tu cua mang:");
	scanf ("%d",&n); 
	for (int i=0;i<n;i++)
	{
		printf ("nhap phan tu thu %d:",i);
		scanf ("%d",&a[i]);
    }
    int min =a[i]; 
    for (int i=0;i<n;i++)
    {
    	if (a[i]>0&&a[i]<min)
    	{
    		min=a[i]; 
		}
    	
	}
	prinf ("so duong be nhat la:%d",min);
    return 0;
}
