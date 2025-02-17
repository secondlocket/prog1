#include <stdio.h>
#include <cs50.h>
#include <string.h>

//klinkers tellen functie
int teller = 0;
int klinkers(const char *woord)
{
    if(char woord[] == "a", "e", "i", "o", "u")
    {
        teller ++;
    }
}

int main ()
{
    string woord1 = tolower(get_string("Woord 1 = "));
    string woord2 = tolower(get_string("Woord 2 = "));
    
    if (klinkers(woord1) > klinkers(woord2))
    {
        printf("%s", woord1);
    }
    else if (klinkers(woord2) > klinkers(woord1))
    {
        printf("%s", woord2);
    }
    
    return 0;
}