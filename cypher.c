#include <stdio.h>
#include <cs50.h>
#include <string.h>

//omkeren functie
char reverse(char c)
{
    if (isupper(c))
    {
        return 'Z' - (c - 'a');
    }
        
    if (islower(c))
    {
        return 'z' - (c - 'A');
    }
}


int main()
{
    char s[];
    
    string invoer = get_string("plaintext: ");
    
    for(int i = 0; i < strlen(invoer); i++)
    {
        if int invoer[i] = 'a';
        
    }
        

    
    return 0;
}