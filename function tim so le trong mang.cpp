#include<stdio.h>
void Nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}
int Kiemtra(int a)
{
	if(a%2 != 0)
	return 1;
	else return 0;
}
void Xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(Kiemtra(a[i]))
		printf("%d\t", a[i]);
	}
}
int main()
{
	int n;
	printf("Nhap so phan tu mang: \n");
	scanf("%d",&n);
	int a[n];
	Nhap(a,n);
	printf("Cac phan tu le trong mang la: \n");
	Xuat(a,n);
}
