#include <stdio.h>
#include <cs50.h>

int main()
{
    int haakje1;
    int haakje2;
    
    string f = get_string("Geef een formule: ");
    
    for (int i = 0; i < strlen(f); i++)
    {
        if (strchr("()", f) == NULL)
        {
            printf("Er zijn geen fouten\n");
        }
        
        //haakje1 "(" tellen
        else if (strchr("(", f))
        {
            haakje1++;
        }
        
        //haakje2 ")" tellen
        else if (strchr(")", f))
        {
            haakje2++;
        }
        
        if (haakje2 > haakje 1)
    }
    
    if (haakje1 != haakje2)
    {
        printf("Er worden te weinig haakjes gesloten");
    }
    
    
    return 0;
}