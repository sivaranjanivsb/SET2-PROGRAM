# include<stdio.h>
int main()
{
int no,i,j=0;
printf("enter the number");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
	if(no%i==0)
	j++;
}
if(j==2)
{
	printf("%d is a prime number",no);
}
else
{
	printf("%d is not a prime number",no);
}
return 0;	
}
