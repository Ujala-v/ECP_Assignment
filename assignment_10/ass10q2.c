#include <stdio.h>

void printBinary(unsigned int num) 
{
    int numBits = sizeof(num) * 8; 
    unsigned int mask = 1 << (numBits - 1); 

    for (int i = 0; i < numBits; i++)
	{
        if (num & mask)
		{
            printf("1");
        } else
		{
            printf("0");
        }
        
        mask >>= 1;

        if ((i + 1) % 8 == 0) 
		{
            printf(" ");
        }
    }

    printf("\n");
}

int main()
{
    unsigned int number;
	printf("Enter the number :\n");
	scanf("%d",&number);

    printf("Binary representation of %u is:\n", number);
    printBinary(number);
    return 0;
}

