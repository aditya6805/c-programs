#include<stdio.h>
int main()
{
	int n,c,b=1;
	printf("enter the base number: ");
	scanf("%d",&n);
	printf("enter the exponent number: ");
	scanf("%d",&c);
	
	for(int i=1;i<=c;i++)
	{
		b*=n;
	}
		printf("%d^%d=%d",n,c,b);
	
}
