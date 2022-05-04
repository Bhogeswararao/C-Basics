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
    for(j=0;j<n;j++)
    {
        int c=0;
        for(k=0;k<n;k++)
        {
            if(ar[j]>ar[k] && ar[j] !=ar[k])
            c++;
        }
        printf("%d ",c);
    }
        
}
