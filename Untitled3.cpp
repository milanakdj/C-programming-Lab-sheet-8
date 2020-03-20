#include<stdio.h>

int interest(int a,int b,int c)
{
	return a*b*c/100;
}

int main()
{
	int a,b,c;
	
	printf("\nenter principal, interest and rate \n");
	scanf("%d%d%d",&a,&b,&c);
	int aa=interest(a,b,c);	
	
	
	printf("the interest is %d",aa);
	return 0;
	
}
