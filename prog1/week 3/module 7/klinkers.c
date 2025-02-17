#include <stdio.h>
#include <cs50.h>
#include <string.h>


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