# include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number of sides \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c && b==c)
	printf("It is an equilteral triangle");
	else if(a==b || b==c ||c==a)
	printf("It is an isosceles triangle");
	else
	printf("It is a scalene triangle");
	
	
}
