#include <stdio.h>
#include <cs50.h>

int main()
{
    int invoer = get_int("Collatz beginnend bij ");
    int stap = 1;

    while (invoer != 1)
    {
        printf("\n Stap %i: %i", stap, invoer)
          
        if (invoer % 2 == 0)
        {
            invoer = invoer / 2;
        }
        else
        {
            invoer = invoer * 3 + 1;
        }

        stap++
    }

    printf("\nStap %i: 1\n", stap);

    return 0;
}
