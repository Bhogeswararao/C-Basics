#include<stdio.h>
int main()
{
	int day;
	printf("Enter your number to get your day: ");
	scanf("%d",&day);
	if(day==1)
	{
		printf("your day is monday");
	}
	else if(day==2)
	{
		printf("your day is tuesday");
	}
	else if(day==3)
	{
		printf("your day is wednesday");
	}
	else if(day==4)
	{
		printf("your day is thursday");
	}
	else if(day==5)
	{
		printf("your day is friday");
	}
	else if(day==6)
	{
		printf("your day is saturday");
	}
	else if(day==7)
	{
		printf("your day is sunday");
	}
	else
	{
		printf("please enter the day between 1 to 7 only,else you can't get your day");
	}
}
