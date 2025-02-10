#include <stdio.h>
#include <cs50.h>

#include <stdio.h>

// Functie om individuele bits om te zetten naar een decimaal getal
int to_decimal(int bit1, int bit2, int bit3, int bit4) {
    return (bit1 << 3) | (bit2 << 2) | (bit3 << 1) | bit4;
}

int main() {
    // Testcases
    printf("%d\n", to_decimal(0, 0, 0, 1)); // Verwacht: 1
    printf("%d\n", to_decimal(0, 1, 0, 1)); // Verwacht: 5
    printf("%d\n", to_decimal(1, 1, 1, 1)); // Verwacht: 15
    return 0;
}
