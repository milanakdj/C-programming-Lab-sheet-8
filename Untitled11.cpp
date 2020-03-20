#include<stdio.h>

int prime(int a)
{
	int m=0,i,c;
	for(i=1;i<=a;i++)
	{
		a%i==0?m++:m;
	}
	m==2?c=0:c=1;
	return c;
}

int main()
{
	int a,b;
	
	printf("enter a number \n");
	scanf("%d",&a);
	b=prime(a);	
	b==0?printf("the number is prime"):printf("the number is not prime");
	return 0;
	
}
