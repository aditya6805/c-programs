#include<stdio.h>
int main()
{
	int n;
	printf("enter length of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter %d no. ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n/2;j++){
		int temp=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=temp;
	}
	for(int k=0;k<n;k++){
	printf("%4d",a[k]);}
	return 0;
}
