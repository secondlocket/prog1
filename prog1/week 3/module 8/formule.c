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
        
        else if (strchr("(", f))
        {
            haakje1++;
        }
        
        else if (strchr(")", f))
        {
            haakje2++;
        }
    }
}