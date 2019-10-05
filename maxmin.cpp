#include<stdio.h>
int main()
{
	int a, b, c;
	printf ("nhap so a:");
	scanf ("%d",&a);
	printf ("nhap so b:");
	scanf ("%d",&b);
	printf ("nhap so c:");
	scanf ("%d",&c);
	int max, min; 
	if (a>b) 
    { if (b>c)
	    {
		max=a;
		min=c; 
	    }
	  else {
	  	if (a>c) 
	  	 { max=a;
		   min=b; 
		 }
		else
		 {
			max=c;
			min=b;
		 } 
        	} 
	}
    else 
    { if (a>c)
	    {
	    	max=b;
			min=c; 
		} 
	  else 
	  {
	  	if (b>c) 
	  	{
	  		max=b;
			min=a; 
	    }
	    else {max=c;
		      min=a; 
		     } 
	  } 
      	
    }

    printf ("\nmax:%d",max);
	printf ("\nmin:%d",min); 
	
	return 0;
 } 
