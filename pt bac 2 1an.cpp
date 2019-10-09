#include<stdio.h> 
#include<math.h> 
int main()
{
   float a,b,c;
   printf ("nhap 3 so a,b,c:");
   scanf("%f%f%f",&a,&b,&c);
   if (a==0)
   {
   	  if (b==0) 
		{
			if (c==0)
			{
				printf ("pt vo so nghiem.");
			} 
			else
			{
			 	printf ("pt vo nghiem."); 
		    } 
		}
	  else 
    	{
   	      printf ("phuong trinh co 1 nghiem duy nhat la:%f",-c/b);
	    }
    }
   else
	{    
	    float delta =b*b-4*a*c; 
		if (delta<0)
		{
			printf ("pt vo nghiem.") ;
		 } 
		else 
	    {
	    	if (delta==0)
			{
				printf ("pt co nghiem kep x=%f",-b/(2*a));
			} 
			else 
			
			{
		    	printf ("pt co nghiem x1=%f",(-b+sqrt(delta))/(2*a));
			    printf ("pt co nghiem x2=%f",(-b-sqrt(delta))/(2*a));
		    }
		}
		 
		 
	} 
	return 0; 
 } 
