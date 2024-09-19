/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome)*/

#include<stdio.h>
int main()
{
int x,a,num1,num2,num3,num4,num5;
printf("Enter 5 digit number:\n");
scanf("%d",&x);
a=x;
num1=x%10;
x=x/10;

num2=x%10;
x=x/10;

num3=x%10;
x=x/10;

num4=x%10;
x=x/10;

num5=x;
// reversing the number
x=(num1*10000+num2*1000+num3*100+num4*10+num5);

if(x==a)
{
printf("\nThe given no is palindrome");
}
else
{
printf("\nThe given no is not a palindrome");
}

return 0;







}
