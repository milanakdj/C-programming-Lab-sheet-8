#include<stdio.h>

int factorial(int a)
{
	int m=1,i;
	for(i=1;i<=a;i++)
	{
		m=m*i;
	}
	return m;
}

int main()
{
	int a,b;
	
	printf("enter a number \n");
	scanf("%d",&a);
	b=factorial(a);	
	printf("the factorial of the given function is %d",b);
	return 0;
	
}
