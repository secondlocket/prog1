#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

    //vertical functie
    void vertical(char *input)
    {
        int n = strlen(input);
        for (int i = 0; i < n; i++)
        {
            printf("%c\n", input[i]);
        }
    }

    //skip functie
    void skip(char *input)
    {
        int i;
        int n = strlen(input);
        
        for (i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                printf("%c", input[i]);
            }
        }
    }
    
    //eek functie
    void eek(char *input)
    {
        int n = 0;
        
        for (int i = 0; i < strlen(input); i++)
        {
            if ((int)input[i] == 101 || (int)input[i] == 69)
            {
                n++;
            }
        }
        
        printf("The text \"%s\" contains %i e's", input, n);
    }
    
    
    //bob functie
    void bob(char *input)
    {
        int i;
        int n = strlen(input);
        
        for (i = 0; i < n; i++)
        {
            if(i % 2 != 0)
            {
                input[i] = toupper(input[i]);
            }
            else
            {
                input[i] = tolower(input[i]);
            }
        }
        
        printf("%s", input);
    }

int main()
{
    //vertical test
    vertical("tokyo hotel");
    printf("\n");
    
    //skip test
    skip("Great, gifts!");
    printf("\n");
    
    //eek test
    eek("Eek! a mouse!");
    printf("\n");
    
    //bob test
    bob("Know your meme");
    
    return 0;
}