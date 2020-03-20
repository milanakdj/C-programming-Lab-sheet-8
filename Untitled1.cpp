#include<stdio.h>
#include<conio.h>

int cubv()
{
	int a;
	printf("enter a number \n");
	scanf("%d",&a);
	return a*a*a;
}

int cubve(int a)
{
	return a*a*a;
}

int main()
{
	int a;
	a=cubv();
	printf("the cube of the number is %d",a);
	
	
	printf("\nenter a number \n");
	scanf("%d",&a);
	int aa=cubve(a);	
	
	
	printf("the cube of the number is %d",aa);
	return 0;
	
}
