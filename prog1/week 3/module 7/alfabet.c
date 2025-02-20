#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main ()
{
    int n = 0;
    
    string woord1 = get_string("Woord 1: ");
    string woord2 = get_string("Woord 2: ");
    
    int leng1 = strlen(woord1) + 1;
    int leng2 = strlen(woord2) + 1;
    
    char cmp1 [leng1];
    char cmp2 [leng2];
    
    //n definieren
    if (leng1 > leng2)
    {
        n = leng1;
    }
    else if (leng2 > leng1)
    {
        n = leng2;
    }
    else if (leng1 == leng2)
    {
        n = leng1;
    }
    else
    {
        return 1;
    }
    
    //omzetten naar kleine letters 1
    for (int i = 0; i < leng1; i++)
    {
        cmp1[i] = tolower(woord1[i]);
    }
    cmp1[leng1] = '\0';
    
    //omzetten naar kleine letters 2
    for (int i = 0; i < leng2; i++)
    {
        cmp2[i] = tolower(woord2[i]);
    }  
    cmp2[leng2] = '\0';
    
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