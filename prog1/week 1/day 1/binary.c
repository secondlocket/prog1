#include <stdio.h>
#include <cs50.h>

int to_decimal(int bit1, int bit2, int bit3, int bit4, int bit5) 
{
    return (bit1 << 4) | (bit2 << 3) | (bit3 << 2) | (bit4 << 1) | bit5;
}

int main() 
{
    printf("%d\n", to_decimal(0, 0, 0, 0, 1));
    printf("%d\n", to_decimal(0, 0, 1, 0, 1));
    printf("%d\n", to_decimal(1, 1, 1, 1, 1));

    return 0;
}
