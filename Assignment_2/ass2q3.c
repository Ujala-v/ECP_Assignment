//Write a program to accept number and check whether the number is +ve, -ve and zero.
#include<stdio.h>
 int main()
 {
int num;
printf("Enter a number:");
scanf("%d",&num);
if(num>0)
{
printf("%d is positive",num);
}
else if(num<0)
{
printf("%d number is negative",num);
}
else
{ printf("%d is zero",num);
}
return 0;






 }
