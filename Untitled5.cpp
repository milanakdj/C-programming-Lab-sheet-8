#include<stdio.h>
#include<conio.h>

int cubevolume()
{
	int a,b,c;
	printf("enter length, breadth and height \n");
	scanf("%d%d%d",&a,&b,&c);
	printf("the volume of the cube is %d",a*b*c);
}


int main()
{	
	cubevolume();
	return 0;
	
}
