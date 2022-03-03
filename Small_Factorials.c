#include<stdio.h>
int main()
{
    int n,i,j,arr1[100],arr2[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    	arr2[i]=1;
    	if(arr1[i]!=0)
    	{		
	       for(j=1;j<=arr1[i];j++)
	        {
	        	arr2[i]=arr2[i]*j;
	        }
	    }
	}
	    for(i=0;i<n;i++)
	    {
		
	    	 printf("%d
",arr2[i]);
	    }
	return 0;
}