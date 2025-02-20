#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main ()
{
    string woord1 = ("Woord 1: ");
    string woord2 = ("Woord 2: ");
    
    for (i = 0; i < strlen(woord1); i++)
    {
        woord1[i] = tolower(woord1[i]);
    }
    
    for (i = 0; i < strlen(woord2); i++)
    {
        woord2[i] = tolower(woord2[i]);
    }
    
    for (i = 0; woord1 != '\0' && woord2 != '\0'; i++)
    {
        if (woord1[i] == woord2[i])
        {
            i++
        }
        else if (woord1[i] < woord2[i])
        {
            printf("%s first", woord1);
            break;
        }
        else if (woord2[i] < woord1[i])
        {
            printf
        }
    }
    
    return 0;
}