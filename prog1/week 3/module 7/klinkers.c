#include <stdio.h>
#include <cs50.h>
#include <string.h>

int klinkers();

int main ()
{
    string woord1 = tolower(get_string("Woord 1 = "));
    string woord2 = tolower(get_string("Woord 2 = "));
    
    klinkers1
    klinkers2
    
    if (klinkers1 > klinkers2)
    {
        printf("%s", woord1);
    }
    else if (klinkers2 > klinkers1)
    {
        printf("%s", woord2);
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
