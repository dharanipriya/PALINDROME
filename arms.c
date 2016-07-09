#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,sum=0,rem;
clrscr();
printf("\n enter no:");
scanf("%d",&n);
n1=n;
while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(n1==sum)
{
printf("armstrong");
}
else
{
printf("not an armstrong");
}
getch();
}
