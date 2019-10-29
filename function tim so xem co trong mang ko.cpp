#include<stdio.h>

int timkiem(int a[],int n,int x)

{

	for(int i=0;i<n;i++)

	{

		if(a[i] == x)

		{

			return 1;

			break;

		}

	}

	return 0;

}

void Nhap(int a[],int n)

{

	for(int i=0;i<n;i++)

	{

		scanf("%d", &a[i]);

	}

}



int main()

{

	int n,x;

	printf("Nhap so phan tu mang: ");

	scanf("%d",&n);

	int a[n];

	Nhap(a,n);

	printf("\nNhap phan tu can tim kiem: ");

	scanf("%d",&x);

	if(timkiem(a,n,x)) printf("\nPhan tu %d co trong mang!",x);

	else printf("\nPhan tu %d khong co trong mang",x);

	

}
