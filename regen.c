#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h = 0;
    int aantal_dagen = 0;
    int totaal_regen = 0;

    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");

    totaal_regen = totaal_regen + h;
        aantal_dagen++;
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
            int g = totaal_regen / aantal_dagen;
            printf("Gemiddeld %.3d millimeter", g);
        }
        
        
        
   
    
    
    }
    while (h < 999);
   
    
    
    return 0;
}