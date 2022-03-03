#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,M,P,Q;
    scanf("%d%d%d",&X,&Y,&M);
    P=pow(X,Y);
    Q=P%M;
    printf("%d",Q);
    return 0;
}