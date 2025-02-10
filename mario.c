#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n;
    do
    {
        n = get_int("hoe hoog is je piramide? (typ iets tussen 1 en 8 in) = ");
        
    }
    while(n<1 || n>8);
    
    printf("n=%i", n);
    
    return 0;
}