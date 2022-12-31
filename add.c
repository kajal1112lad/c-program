#include<stdio.h>
void add();
main()
{
	int a,b,sum;
	printf("\n enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	sum=a+b;
	printf("\n sum of two no=%d",sum);
	printf("\n Hello");
	add();
}
void add()
{
	int a,b,c;
	printf("\n enter a& b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n add=%d",c);
}
