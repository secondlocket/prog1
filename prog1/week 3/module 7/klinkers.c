#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int klinkers(string woord);

int main ()
{
    string woord1 = tolower(get_string("Woord 1 = "));
    string woord2 = tolower(get_string("Woord 2 = "));
    
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
int klinkers(const char *woord)
{
    int teller = 0;
    const char klinkers[] = "aeiou";
    
    for (int i = 0; woord[i] != '\0'; i++)
    {
        if (woord[i] == klinkers[i])
        {
            teller ++;
            break;
        }
    }
}
