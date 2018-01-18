#include<stdio.h>
void main()
{
int i,n,a=1;
printf("enter the number \t");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
a=a*i;
}
printf("the factorial of number  %d \t is %d \t",n,a);
}
