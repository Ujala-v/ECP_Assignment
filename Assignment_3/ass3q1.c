/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
*******/


#include<stdio.h>
int main()

{
char ch;
int num;
printf("Enter a character\n:");
scanf("%c",&ch);
printf("Enter a number\n:");
scanf("%d",&num);
int i=1;
while( i<=num )
{
printf("%c",ch);
i++;
}

return 0;
}










