#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf(" hey buddy enter your numbers :\t");
	scanf("%d  %d %d %d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("The biggest number is %d",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf("The biggest number is %d",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("The biggest number is %d",c);
	}
	else{
		printf("d is bigger",d);
	}
}
