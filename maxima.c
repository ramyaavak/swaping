#include<stdio.h>
int main()
{
int a[100],b,n=10,i,j;
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
b=a[i];
a[i]=a[j];
a[j]=b;
}
}
}
printf("\n%d",a[n]);
return 0;
}
