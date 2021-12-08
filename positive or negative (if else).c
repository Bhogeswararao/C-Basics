#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a>0){
	    printf("positive number");
	}
	else if(a==0){
		printf("neither positive nor negative");  
	}
	else{
	printf("negative");
		
	}
	
}
