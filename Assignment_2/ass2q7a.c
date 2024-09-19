/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators*/
#include<stdio.h>
int main(){
int year;
printf("Enter a year:\n");
scanf("%d",&year);

if(year%4==0)
{
	if( year%100==0)
	{
		if(year%400==0)
		{
		printf("it is leap year");
		}
		else
		{
		printf("it is not leap year");
		}
	}
	else
	{
	
		printf("it is leap year");
	}
}
else 
{
printf("it is not leap year");
}



}
