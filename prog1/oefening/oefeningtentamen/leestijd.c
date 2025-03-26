#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define MAX 1000

void leestijd(int array[], int n)
{
    if (n == 0)
    {
        printf("Je hebt niet gelezen.\n");
        return;
    }

    int tijd = 0;

    for (int i = 0; i < n; i++)
    {
        tijd += array[i];
    }

    int woorden = 250 * tijd;
    int paginas = round((float)woorden / 300);

    if (n != 0)
    {
        printf("Je hebt ongeveer %i paginas gelezen.\n", paginas);
    }
}

int main()
{
    int x = 0;
    int array[MAX];

    while (1)
    {
        int nummer = get_int("(Typ 999 in als je klaar bent) Leessessie in minuten: \n");
        if (nummer == 999)
        {
            break;
        }

        if (x < MAX)
        {
            array[x] = nummer;
            x++;
        }
        else
        {
            printf("Maximum aantal sessies bereikt.\n");
            break;
        }
    }
  
    leestijd(array, x);

    return 0;
}
