#include<stdio.h>
int main()
{
    int n,j,i,arr[100],sum=0,ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {
            sum=arr[i]+ar[i];
            printf("%d ",sum);
        }
        break;
    }
}