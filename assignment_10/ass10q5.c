#include <stdio.h>
#include <ctype.h> 

void checkAndXOR(char ch)
{
    if (isalpha(ch))
	{
        printf("Original character: '%c'\n", ch);

        char result = ch ^ 32;

        printf("Character after XOR with 32: '%c'\n", result);
    } else
	{
        printf("The character '%c' is not an alphabet.\n", ch);
    }
}

int main()
{
    char ch;

    printf("Enter a character: ");
  
  	if (scanf(" %c", &ch) != 1)
	{
        fprintf(stderr, "Invalid input. Please enter a single character.\n");
        return 1;
    }

    checkAndXOR(ch);

    return 0;
}

