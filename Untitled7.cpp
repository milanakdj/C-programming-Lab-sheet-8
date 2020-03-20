#include<stdio.h>

char change(int b)
{
	int c;
	b>=97?c=b-32:c=b+32;
	return c;
}

int main()
{
	char a;
	int aa;
	int b;
	printf("enter a character \n");
	scanf("%c",&b);
	aa=change(b);	
	
	
	printf("the character is %c",aa);
	return 0;
	
}
