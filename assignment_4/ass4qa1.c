//Write a function to calculate factorial of a given number.



#include<stdio.h>
#include<math.h>

int fact();//function declaration
int main()
{

    printf("Enter a Number to Find Factorial: ");
    printf("\nFactorial of a Given Number is: %d ",fact());
    return 0;
}
int fact()//function defination
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}






