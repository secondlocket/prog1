#include <stdio.h>
#include <cs50.h>

int main()
{
    int invoer = get_int("Collatz beginnend bij ");
    int getal;
    int stap = 1;

    while (getal != 1)
    {
          printf("\n Stap %i: %i", stap, invoer)
          
          if (invoer % 2 == 0)
          {
              getal = invoer / 2; 
              stap++;
          }
          else
          {
              getal = invoer * 3 + 1;
              stap++;
          }
    }

    return 0;
}
