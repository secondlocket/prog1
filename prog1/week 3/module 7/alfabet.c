#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    int n = 0;
    
    string woord1 = get_string("Woord 1: ");
    string woord2 = get_string("Woord 2: ");
    
    char cmp1 [strlen(woord1)];
    char cmp2 [strlen(woord2)];
    
    //controleren welke langer is
    if (strlen(woord1) > strlen(woord2))
    {
        n = strlen(woord1);
    }
    else if (strlen(woord2) > strlen(woord1))
    {
        n = strlen(woord2);
    }
    else if (strlen(woord1) == strlen(woord2))
    {
        n = strlen(woord1);
    }
    else
    {
        return 1;
    }
    
    //omzetten naar kleine letters 1
    for (int i = 0; i < strlen(woord1); i++)
    {
        cmp[i] = tolower(woord1[i]);
    }
    
    //omzetten naar kleine letters 2
    for (int i = 0; i < strlen(woord2); i++)
    {
        vergelijk2[i] = tolower(woord2[i]);
    }
    
    //hoofdlus
    for (int i = 0; i < n; i++)
    {
        if (vergelijk1[i] == woord2[i])
        {
            if (woord1[i] == '\0' || woord2[i] == '\0')
            {
                if (strlen(woord2) == strlen(woord1))
                {
                    // not printing
                    printf("no need to decide!");
                    break;
                }
                else if (n == strlen(woord2))
                {
                    printf("%s first", woord2);
                    break;
                }
                else if (n == strlen(woord1))
                {
                    printf("%s first", woord1);
                    break;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                i++;
            }
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