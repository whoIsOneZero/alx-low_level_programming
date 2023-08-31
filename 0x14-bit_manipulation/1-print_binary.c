#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 2 - 1);
    if (n == 0)
    {
        printf("0");
        return;
    }

    /*Create a mask with the most significant bit set*/

    while (mask > 0)
    {
        if (n & mask)
            printf("1");
        else
            printf("0");

        mask >>= 1;
    }
}
