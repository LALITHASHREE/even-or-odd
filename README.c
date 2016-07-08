#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
if(a%b==1)
{
printf("the given number is even");
}
if(a%b==0)
{
printf("the given number is odd");
}
return0;
}
