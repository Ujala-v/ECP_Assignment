/*Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9000 + 300 + 60 + 9
c. 1639*/



#include <stdio.h>

int main()

{
	int num, num1,num2,num3,num4;
	printf("Enter four digit number: ");
	scanf("%d",&num);
	num1=num/1000;
	num=num%1000;
	num2=num/100;
	num=num%100;
	num3=num/10;
	num=num%10;
	num4=num;
	{
	printf("face value:%d %d %d %d\n",num1,num2,num3,num4);
	printf("place value:%d+%d+%d+%d\n",num1*1000,num2*100,num3*10,num4*1);
	printf("reverse value:%d%d%d%d\n",num4,num3,num2,num1);

	}
	return 0;

}
