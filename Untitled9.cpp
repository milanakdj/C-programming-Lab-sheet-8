#include<stdio.h>

void mul(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",a,i,a*i);
	}

}

int main()
{
	int a,b;
	
	printf("enter a number \n");
	scanf("%d",&a);
	mul(a);	
	
	return 0;
	
}
