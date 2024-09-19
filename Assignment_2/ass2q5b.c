/*Write a program to find maximum of three numbers using
b. conditional operator.*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three number:\n");
scanf("%d%d%d",&a,&b,&c);
printf("maximum of three number is %d",(a>b && a>c)?(a):(b>c)?(b):(c));
return 0;
}
























