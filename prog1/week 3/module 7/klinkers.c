#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int klinkers(string woord);

int main ()
{
    string woord1 = get_string("Woord 1 = ");
    string woord2 = get_string("Woord 2 = ");
    
    for (int i = 0; woord1[i] != '\0'; i++)
    {
        woord1[i] = tolower(woord1[i]);
    }
    
    for (int i = 0; woord2[i] != '\0'; i++)
    {
        woord2[i] = tolower(woord2[i]);
    }
    
    int klinkers1 = klinkers(woord1);
    int klinkers2 = klinkers(woord2);
    
    if (klinkers1 > klinkers2)
    {
        printf("%s\n", woord1);
    }
    else if (klinkers2 > klinkers1)
    {
        printf("%s\n", woord2);
    }
    else
    {
        printf("%s %s", woord1, woord2);
    }
    
    return 0;
}

//klinkers tellen functie
int klinkers(string woord)
{
    int teller = 0;
    const char klinkers[] = "aeiou";
    
    for (int i = 0; woord[i] != '\0'; i++)
    {
        char x = tolower(woord[i]);
        
        for (int j = 0; klinkers[j] != '\0'; j++)
        {
            if (woord[i] = klinkers[j])
            {
                teller++;
            }
        }
    }
    
    return teller;
}
