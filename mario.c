#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n;
    do
    {
        n = get_int("hoe hoog is je piramide? (typ iets tussen 1 en 8 in) = ");
        
    }
    while(1>n, n>8);
}