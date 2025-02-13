#include <stdio.h>
#include <cs50.h>
#include <string.h>

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
            if (input[i] = E || input == 101)
            {
                n++;
            }
        }
        printf("The text "%c" contains %i e's", input, n)
    }
    
    
    //bob functie

int main()
{
    //vertical test
    vertical("tokyo hotel");
    
    //skip test
    skip("Great, gifts!");
    
    //eek test
    //eek("Eek! a mouse!");
    
    //bob test
    //bob("Know your meme");
    
    return 0;
}