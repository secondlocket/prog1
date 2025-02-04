#include <stdio.h>

int times_two(int a);
void print_int(int a);

int main(void)
{
    int x = 2;
    int y = times_two(x);

    print_int(y);
}

int times_two(int a)
{
    return a * 2;
}

void print_int(int a)
{
    printf("Value = %i\n", a);
}


int half(int a)
{
    return a/2;
}