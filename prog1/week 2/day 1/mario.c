#include <stdio.h>
#include <cs50.h>

int main ()
{
    //hoogte van piramide
    int n;
    do
    {
        n = get_int("hoe hoog is je piramide? (typ iets tussen 1 en 8 in) = ");
        
    }
    
    //# loop
    while(n < 1 || n > 8);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++){
            printf("#")
        }
        printf("\n");
    }
    
    return 0;
}