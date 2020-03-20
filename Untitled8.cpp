#include<stdio.h>
#include<stdlib.h>

char printname(char name[40])
{
	printf("%s",name);
	return '\n';
}

int main()
{
	char aaa[40];
	char aaaa;
	int aa;
	int b;
	printf("enter a number \n");
	scanf("%d",&b);
	
	printf("enter a name: ");
	fflush(stdin);
	scanf("%[^\n]",aaa);
	for (aa=0;aa<b;aa++)
	{
		aaaa=printname(aaa);	
		printf("%c",aaaa);
	}
	
	return 0;
	
}
