#include<stdio.h>
int main()
{ 
   int x,y;
   printf ("nhap so x:");
   scanf ("%d",&x);
   printf ("\nnhap so y:");
   scanf ("%d",&y);

    int num; 
    num=x; 
    x=y;
     
          printf ("doi so x thanh:%d\n",x); 
    y=num; 
          printf ("doi so y thanh:%d ",y);
   return 0; 
 } 
