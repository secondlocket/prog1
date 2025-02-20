#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    string woord1 = get_string("Woord 1: ");
    string woord2 = get_string("Woord 2: ");
    
    
    if (strlen(woord1) > strlen(woord2))
    {
        int n = strlen(woord1);
    }
    else if (strlen(woord2) > strlen(woord1))
    {
        int n = strlen(woord2);
    }
    else if (strlen(woord1) == strlen(woord2))
    {
        int n = strlen(woord1);
    }
    else
    {
        return 1;
    }
    
    //omzetten naar kleine letters 1
    for (int i = 0; i < strlen(woord1); i++)
    {
        woord1[i] = tolower(woord1[i]);
    }
    
    //omzetten naar kleine letters 2
    for (int i = 0; i < strlen(woord2); i++)
    {
        woord2[i] = tolower(woord2[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (woord1[i] == woord2[i])
        {
            if (woord1[i] == '\0' || woord2[i] == '\0')
            {
                
            }
            i++;
        }
        else if (woord1[i] < woord2[i])
        {
            printf("%s first", woord1);
            break;
        }
        else if (woord2[i] < woord1[i])
        {
            printf("%s first", woord2);
            break;
        }
    }
    
    return 0;
}