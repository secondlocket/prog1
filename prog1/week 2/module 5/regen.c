#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h = 0;
    int aantal_dagen = 0;
    float totaal_regen = 0;

    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");

    do
    {
        h = get_int("Hoeveel: ");
        
        if (h == 999)
        {
            if (aantal_dagen == 0)
            {
                printf("Dat kan niet");
                break;
            }
        }
    
        if (h==0)
        {
            float g = totaal_regen / (aantal_dagen - 1);
            printf("Gemiddeld %0.3f millimeter", g);
            break;
        }
        aantal_dagen++;
        totaal_regen = totaal_regen + h;
        
    }
    while (h != 999);
  
    return 0;
}