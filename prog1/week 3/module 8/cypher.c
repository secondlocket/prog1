#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//reverse functie
char reverse(char c)
{
    if (islower(c))
    {
        return 'Z' - (c - 'a');
    }
        
    if (isupper(c))
    {
        return 'z' - (c - 'A');
    }
    
    return c;
}


int main()
{
    string invoer = get_string("plaintext: ");
    
    for(int i = 0; i < strlen(invoer); i++)
    {
        printf("cyphertext: %c", reverse(invoer[i]));
    }

    return 0;
}