void main()
{
int no,rno=0;
scanf("%d",&no);
while(no!=0)
{
r=no%10;
rno=(rno*10)+r;
no/10;
}
if(no=rno)
{
printf("no %d is palindrome",no);
}
else
{
printf("no %d is not palindrome",no);
}
}
