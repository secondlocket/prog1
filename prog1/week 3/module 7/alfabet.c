#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    int n = 0;
    
    string woord1 = get_string("Woord 1: ");
    string woord2 = get_string("Woord 2: ");
    
    char cmp1 [strlen(woord1) + 1];
    char cmp2 [strlen(woord2) + 1];
    
    //n definieren
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
        cmp1[i] = tolower(woord1[i]);
    }
    cmp1[strlen(woord1)] = '\0';  
    
    //omzetten naar kleine letters 2
    for (int i = 0; i < strlen(woord2); i++)
    {
        cmp2[i] = tolower(woord2[i]);
    }  
    
    //als de woorden hetzelfde zijn
    for (int i = 0; i < n; i++)
    {
        if (cmp1[i] == cmp2[i])
        {
            if (cmp1[i] == '\0' || cmp2[i] == '\0')
            {
                if (strlen(cmp1) == strlen(cmp2))
                {
                    printf("No need to decide!");
                    break;
                }
                else if (n == strlen(cmp2))
                {
                    printf("%s first", woord2);
                    break;
                }
                else if (n == strlen(cmp1))
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
        
        //als ze niet gelijk zijn
        else if (cmp1[i] < cmp2[i])
        {
            printf("%s first", woord1);
            break;
        }
        
        else if (cmp2[i] < cmp1[i])
        {
            printf("%s first", woord2);
            break;
        }
    }
    
    return 0;
}