#include <stdio.h>

void print_in_words(int num) {
    const char *ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char *tens[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    const char *thousands[] = {"", "Thousand", "Million", "Billion"};
    
    if (num == 0) {
        printf("Zero");
        return;
    }
    
    void print_number_less_than_thousand(int n) {
        if (n >= 100) {
            printf("%s Hundred ", ones[n / 100]);
            n %= 100;
        }
        if (n >= 20) {
            printf("%s ", tens[n / 10 - 2]);
            n %= 10;
        }
        if (n >= 10) {
            printf("%s ", teens[n - 10]);
            n = 0;
        }
        if (n > 0) {
            printf("%s ", ones[n]);
        }
    }
    
    int i = 0;
    int chunk;
    while (num > 0) {
        chunk = num % 1000;
        if (chunk > 0) {
            print_number_less_than_thousand(chunk);
            printf("%s ", thousands[i]);
        }
        num /= 1000;
        i++;
    }
}

int main() {
    int number = 123456789;
    print_in_words(number);
    printf("\n");
    return 0;
}

