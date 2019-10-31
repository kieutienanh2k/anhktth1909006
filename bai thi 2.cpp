#include<stdio.h>
int main(){
	int year;
	float lai;
	float sum;
	float interest;
	printf ("nhap capital sum =\n");
	scanf ("%d",&sum);
	printf ("nhap rate of interest: \n");
	scanf ("%f",&interest);
	printf ("nhap year: \n");
	scanf ("%d",&year);
	interest=(float)interest/100;
	for (int i=0;i<year;i++)
	{
		lai = sum*interest;
		sum+=lai;
	    printf("year %d\t interest %f\t sum %f\t",i,lai,sum);
	}
	return 0; 
} 
