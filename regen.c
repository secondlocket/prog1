#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h = 0;
    
    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");

    do
    {
        h = get_int("Hoeveel: ");
        
        if (h == 999 || )
        {
            printf("Dat kan niet");
            break;
        }
    }
    while (h < 999);
   
    
    
    return 0;
}