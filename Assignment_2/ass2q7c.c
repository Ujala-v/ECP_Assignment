/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
c. Conditional operator*/




#include<stdio.h>
#include <stdbool.h>
int main()
{
int year;
bool x;
printf("Enter the year:\n");
scanf("%d",&year);

x=year%4==0?(year%100!=0?true:(year%400==0?true:false)):false;
if (x==true)
printf("it is leap year");
else
printf("it is not leap year");


return 0;
 }
