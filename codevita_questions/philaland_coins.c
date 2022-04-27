#include <stdio.h>
int sum(int x[],int l)
{
  int j,s1=0;
  for(j=1;j<=l;j++)
    s1=s1+x[j];
   return s1;
}
int main() {
 int n,a[100],k=1,i,c,t,j;
 scanf("%d",&t);
 for(j=0;j<t;j++)
 {
 scanf("%d",&n);
 a[1]=1;
 c=0;
 for(i=1;i<=n;i++)
 {
     if(i>sum(a,k))
     {
         k++;
         a[i]=k;
     }
 }
 for(i=1;i<=k;i++)
 {
     if(a[i]!=0)
     c++;
 }
 printf("%d\n",c);
 for(i=1;i<=k;i++)
 a[i]=0;
 k=1;
 }
 return 0;
}
