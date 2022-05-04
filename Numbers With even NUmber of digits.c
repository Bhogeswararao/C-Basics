#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],j,k,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int c=0;
    for(j=0;j<n;j++)
    {
        int r,f=0;
        while(ar[j]!=0)
        {
            r= ar[j]%10;
            f++;
            ar[j]/=10;
        }
        if(f%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
        
}
