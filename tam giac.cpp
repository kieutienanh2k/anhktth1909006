#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c;
	printf ("nhap 3 so:") ;
	scanf ("%d%d%d",&a,&b,&c);
	if (a+b>c&&b+c>a&&c+a>b)
	{
		printf ("day la tam giac\n") ;
		int CV = (a+b+c) ;
		float
	    P=CV/2; 
	    float S = sqrt(P*(P-a)*(P-b)*(P-c));
		printf ("chu vi CV=%d\n",CV);
		printf ("dien tich S =%f",S);
		
	}
	else
	{
		printf ("day ko la tam giac");
	 } 
	 return 0; 
 } 
