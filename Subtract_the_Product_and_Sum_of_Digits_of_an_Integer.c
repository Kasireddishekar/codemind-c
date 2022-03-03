#include<stdio.h>
int main()
{
    int n,product=1,sum=0,rem,k;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        product=product*rem;
        sum=sum+rem;
        n=n/10;
    }
    k=product-sum;
    printf("%d",k);
}