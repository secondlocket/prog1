#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h = 0;
    int aantal_dagen = 0;
    int totaal_regen = 0;

    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");

    do
    {
        h = get_int("Hoeveel: ");
        
        if (h == 999)
        {
            printf("Dat kan niet");
            break;
        }
        
        if (h==0)
        {
            if (aantal_dagen == 0)
            {
                printf("Geen data ingevoerd\n");
            }
            else
            {
                int g = totaal_regen / aantal_dagen;
                printf("Gemiddeld %.3d millimeter", g);
                totaal_regen = totaal_regen + h;
            aantal_dagen++;
            }
            break;
        }

    }
    while (h < 999);
  
    return 0;
}