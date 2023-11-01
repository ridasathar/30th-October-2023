/*This program is used to swap numbers*/
# include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are %d %d",a,b);
	return 0;
}
