#include<stdio.h>
int main()
{
    int n,i,arr[n],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        arr[i]++;
    }
    printf("%d",sum);
}