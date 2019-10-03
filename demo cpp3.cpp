#include<stdio.h> 
 int main()
 {
 	int a,b,c,min,max;
 	printf ("nhap so thu nhat:"); 
 	scanf ("%d",&a) ;
 	printf ("nhap so thu hai:");
	scanf("%d",&b);
	printf ("nhap so thu ba:");
	scanf("%d",&c) ;
	
	max=a;
	if (max<b)
	    max=b;
    if(max<c) 
	    max=c;
	printf ("\nso lon nhat la: %d",max); 
    if (b<min)
	    min=b;
    if(c<min)
	    min=c;
	printf ("\nso nho nhat: %d",min) ;  
 } 
