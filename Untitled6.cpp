#include<stdio.h>

int largest(int a, int b)
{
	int c;
	a>b?c=a:c=b;
	return c;
}

int main()
{
	int a,b;
	
	printf("enter 2 number \n");
	scanf("%d%d",&a,&b);
	int aa=largest(a,b);	
	
	
	printf("the larger number is %d",aa);
	return 0;
	
}
