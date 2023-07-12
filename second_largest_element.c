#include <stdio.h>

int main() {
	//code
	int n;
	scanf("%d ",&n);
	int a[n],i,j,k,temp;
	for(i=0;i<n;i++)
	{
	    scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=0;j<n-1-i;j++)
	    {
	        if(a[j]<=a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
	k=1;
	while(k!=n)
	{
	    if(a[k]!=a[k-1])
	    {
	        printf("%d ",a[k]);
	        break;
	    }
	    else
	    {
	        k++;
	    }
	}
	return 0;
}