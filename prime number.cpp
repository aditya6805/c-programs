#include<stdio.h>
int main()
{
	int n,i,flag;
	printf("enter a positive no.: ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0){
			flag=0;
			break;
		}
	}
	if(flag)
	{
		printf("%d is a prime no.",n);
	}
	else
	printf("%d is not a prime no.",n);
}
