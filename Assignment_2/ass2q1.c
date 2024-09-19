/*:Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message*/
#include<stdio.h>
int main()
{ 
int num1,num2;
printf("Enter the two number:");
scanf("%d%d",&num1,&num2);
if(num2!=0)
{
printf("div= %d\n",num1/num2);
}
else
{
printf("num2 is divide by zero error");
}
return 0;


}
