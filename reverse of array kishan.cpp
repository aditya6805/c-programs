#include<stdio.h>
int main()
{
	int a[5];
	printf("enter 5 no. ");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<5/2;j++){
		int temp=a[j];
		a[j]=a[5-1-j];
		a[5-1-j]=temp;
	}
	for(int k=0;k<5;k++){
	printf("%4d",a[k]);}
	return 0;
}
