#include<stdio.h>
int main()
{
	int a;
	printf(" hey buddy enter your marks t");
	scanf("%d",&a);
	if(a>=80 && a<100)
	{
		printf("your grade is A");
	}
	else if(a>=70 && a<80)
	{
		printf("b");
	}
	else if(a>=60 && a<70)
	{
		printf("your grade is c");
	}
	else if(a>=50 && a<60)
	{
		printf("your grade is d");
	}
	else if(a<50)
	{
		printf("sorry buddy you failed in this exam");
	}
	else{
		printf(" please enter your marks below 100");
	}
	
}
