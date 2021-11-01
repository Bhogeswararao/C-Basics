#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    h=c+d+e+f+g+h;
    printf("sum of %d and %d is %d\n",a,b,c);
    printf("difference of %d and %d is %d\n",a,b,d);
    printf("quotient when %d is divided with %d is %d\n",a,b,f);
    printf("multiplicatin of %d and %d is %d\n",a,b,e);
    printf("remainder when %d is divided with %d is %d\n",a,b,g);
    printf("sum of all airthematic opeartion is %d",h);
    
	
}

