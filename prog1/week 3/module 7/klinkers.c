#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int klinkers(string woord);

int main ()
{
    string woord1 = get_string("Woord 1 = ");
    string woord2 = get_string("Woord 2 = ");
    
    string kleine1 = tolower(woord1);
    string kleine2 = tolower(woord2);
    
    int klinkers1 = klinkers(kleine1);
    int klinkers2 = klinkers(kleine2);
    
    if (klinkers1 > klinkers2)
    {
        printf("%s\n", kleine1);
    }
    else if (klinkers2 > klinkers1)
    {
        printf("%s\n", kleine2);
    }
    else
    {
        printf("%s %s", kleine1, kleine2);
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
        
        if (x == klinkers[i])
        {
            teller ++;
            break;
        }
    }
    
    return teller;
}
