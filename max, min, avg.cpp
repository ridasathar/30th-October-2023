#include<stdio.h>
int main()
{
	int i,n,b=0,x;
	printf("Enter the number of integers in the array. \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers. \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	x=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>x)
		x=a[i];
	}
	printf("Maximum value entered in array is %d \n",x);
	x=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<x)
		x=a[i];
	}
	printf("Minimum value in array is %d \n",x);
	for(i=0;i<n;i++)
	b+=a[i];
	printf("Average value is %d", b/5);
	return 0;
}

