#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
	float a,b,c=0;
	char ch;
	double total_time;
	clock_t start,end;
	clrscr();
	scanf("%f",&a);
	start=clock();
	while(1)
	{
		scanf("%c",&ch);
		//clrscr();
		//printf("%.2f\n",a);
		if(ch=='=')
		break;
		switch(ch)
		{
		  case '+':scanf("%f",&b);
			   c=a;
			   a=a+b;
			   break;
		  case '-':scanf("%f",&b);
			   c=a;
			   a=a-b;
			   break;
		  case '*':a=a-c;
			   scanf("%f",&b);
			   a=a*b;
			   a=a+c;
			   //c=a;
			   break;
		  case '/':a=a-c;
			   scanf("%f",&b);
			   a=a/b;
			   a=a+c;
			   //c=a;
			   break;
		}
	}
	textcolor(5);
	cprintf("ans=%.2f",a);
	end=clock();
	total_time=((double)(end-start))/CLK_TCK;
	printf("\nTIME OF EXECUTION = %fseconds\n",total_time);
	getch();
}