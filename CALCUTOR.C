#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	char n;
	clrscr();
	scanf("%d%d",&a,&b);
	printf("Enter operator\n");
	scanf("%c",&n);
	if(n=='*')
	printf("%d",a*b);
	if(n=='+')
	printf("%d",a+b);
	getch();
}