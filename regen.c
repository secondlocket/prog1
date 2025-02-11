#include <stdio.h>
#include <cs50.h>

int main () 
{
    int h;
    
    printf("Voer hoeveelheid van regen per dag, typ 999 in om af te sluiten\n");
    
    if (h == 999)
        {
            printf("Dat kan niet");
        }
    
    do
    {
        h = get_int("Hoeveel: ");
        
    }
    while (h < 999);
   
    
    
    return 0;
}