#include <stdio.h>

int countSetBits(int num)
{
    int count = 0;
    while (num)
	{
        num = num & (num - 1); 
        count++;
    }
    return count;
}

int main()
{
    int number;
	printf("Enter the number :\n");
	scanf("%d",&number);

    printf("Number of '1' bits in %d is %d\n", number, countSetBits(number));
    return 0;
}
