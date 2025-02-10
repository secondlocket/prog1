#include <stdio.h>
#include <cs50.h>

int to_decimal(int bit1, int bit2, int bit3, int bit4, int bit5) 
{
    return (bit1 << 3) | (bit2 << 2) | (bit3 << 1) | bit4;
}

int main() 
{
    printf("%d\n", to_decimal(0, 0, 0, 1));
    printf("%d\n", to_decimal(0, 1, 0, 1));
    printf("%d\n", to_decimal(1, 1, 1, 1, 1));

    return 0;
}
