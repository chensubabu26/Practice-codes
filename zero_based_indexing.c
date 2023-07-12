#include <stdio.h>

int main() {
	//code
	int n,k,b=-1;
	scanf("%d %d",&n,&k);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	    scanf("%d ",&a[i]);
	    if(a[i]==k)
	    {
	        b=i;
	    }
	}
	if(b>=0)
	printf("%d ",b);
	else
	printf("%d",b);
	return 0;
}