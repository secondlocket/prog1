#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n;
    do
    {
        n = get_int("hoe hoog moet het trapezium zijn? = ");
    }
    while(n < 5 || n > 20);
    
    //eerste regel
    for(i = 0; i < n - 1; i++)
    {
        //spatie links
        for (int y = 0; y < n - i - 1; y++)
        {
            printf(".");
            printf("#");
        }
    }
    return 0;
}