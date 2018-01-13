# include<stdio.h>
void main()
{
int l,u,i;
printf(" enter the lower and upper limits");
scanf("%d %d",&l,&u);
printf("the numbers between %d to %d is \n",l,u);
for (i=l;i<u;i++)
{
if(i%2==0)
printf("%d \n",i);
}
}
