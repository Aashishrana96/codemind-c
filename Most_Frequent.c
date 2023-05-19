#include<stdio.h>
int main()
{
    int n,arr[100],m=0,i,j,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        c=0;
        for(j=0;j<=n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>m)
        {
            m=c;
            k=arr[i];
        }
        else if(c==m && arr[i]<k)
        {
            k=arr[i];
        }
       
    }
    printf("%d",k);
}