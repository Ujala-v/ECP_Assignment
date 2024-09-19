/*write a program to find maximum of two numbers using
b. conditional operator.*/



#include<stdio.h>
int main()
{
int number1,number2;
printf("Enter two numbers:\n");
scanf("%d%d",&number1,&number2);
printf(" maximum of two number is %d:",(number1>number2)?number1:number2);
return 0;


}
