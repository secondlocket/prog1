#include <stdio.h>

int half(int a);
void print_int(int a);

int main(void)
{
    int x = 2;
    int y = half(x);

    print_int(y);
}

int half(int a)
{
    return a / 2;
}

void print_int(int a)
{
    printf("Value = %i\n", a);
}
