#include <stdio.h>
#include <stdbool.h>

bool hasEvenParity(unsigned char byte)
{
    unsigned char numBits = byte;
    int count = 0;

    while (numBits)
	{
        count += numBits & 1; // Increment count if the LSB is 1
        numBits >>= 1;        // Shift right to check the next bit
    }

    return (count % 2 == 0);
}

int main()
{
    unsigned int input;
    unsigned char byte;

    printf("Enter a byte (0 to 255): ");

    byte = (unsigned char)input;

    if (hasEvenParity(byte)) 
	{
        printf("The byte 0x%02X has even parity.\n", byte);
    } else
	{
        printf("The byte 0x%02X has odd parity.\n", byte);
    }

    return 0;
}

