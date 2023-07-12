#include <stdio.h>

int main() {
	//code
   int n;
   scanf("%d ",&n);
   int a[n],i,j,k=0,temp;
   int c[n];
   for(i=0;i<n;i++)
   {
       scanf("%d ",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j] && a[j]!=-1)
           {
               c[k]=a[i];
               k++;
               a[j]=-1;
           }
       }
   }
   for(i=0;i<k-1;i++)
   {
       for(j=0;j<k-1-i;j++)
       {
           if(a[j]>a[j+1])
           {
           temp=c[j];
           c[j]=c[j+1];
           c[j+1]=temp;
           }
       }
   }
   for(i=0;i<k;i++)
   {
       printf("%d ",c[i]);
   }
   
	return 0;
}