#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    int haakje1 = 0;
    int haakje2 = 0;
    
    string formule = get_string("Geef een formule: ");
    
    for (int i = 0; i < strlen(formule); i++)
    {
        char f = formule[i];
        
        //haakje1 "(" tellen
        if (f == '(')
        {
            haakje1++;
        }
        
        //haakje2 ")" tellen
        else if (f (")", f))
        {
            haakje2++;
        }
        
        if (haakje2 > haakje1)
        {
            printf("Er wordt een haakje te vroeg gesloten\n");
            break;
        }
    }
    
    if (haakje1 > haakje2)
    {
        printf("Er worden te weinig haakjes gesloten\n");
    }
    else
    {
        printf("Er zijn geen fouten\n");
    }
    
    return 0;
}