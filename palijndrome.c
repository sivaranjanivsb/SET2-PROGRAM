# include<stdio.h>
void main()
{
int no,revno=0;
scanf("%d",&no);
while(no!=0)
{
remainder=no%10;
revno=(revno*10)+remainder;
no/10;
}
if(no=revno)
{
printf("no %d is palindrome",no);
}
else
{
printf("no %d is not palindrome",no);
}
}
