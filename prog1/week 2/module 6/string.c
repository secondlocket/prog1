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
        if(n % 2 != 0)
        {
            continue;
        }
        else
        {
            
        }
    }
    
    //eek functie
    
    //bob functie

int main()
{
    //vertical test
    vertical("tokyo hotel");
    
    //skip test
    skip("Great, gifts!");
    
    //eek test
    eek("Eek! a mouse!");
    
    //bob test
    bob("Know your meme");
    
    return 0;
}