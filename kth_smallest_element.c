#include <stdio.h>

int main() {
	//code
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
	{
	    scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-1-i;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
	/* for(i=0;i<n;i++)
	{
	    printf("%d ",a[i]);
	}
	*/
	printf("%d ",a[k-1]);
	return 0;
}