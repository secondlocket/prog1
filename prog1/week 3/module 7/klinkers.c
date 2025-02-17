#include <stdio.h>
#include <cs50.h>
#include <string.h>

int klinkers();

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
        printf()
    }
    
    return 0;
}

//klinkers tellen functie
int teller = 0;
int klinkers(const char *woord)
{
    if(char woord[] == "a", "e", "i", "o", "u")
    {
        teller ++;
    }
}
