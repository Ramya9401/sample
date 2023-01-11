#include<stdio.h>

int main()
{
int n,a[100],t,i=0,b[100],count=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
t=n%2;
n=n/2;
a[i]=t;
i++;
}
for(int j=0,k=i-1;j<i;j++,k--)
{
b[j]=a[k];
}
for(int j=0;j<i;j++)
{
if(a[j]==1)
count++;
}
printf("count:%d\n",count);
}
