#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string invoer = get_string("plaintext: ");
    
    for(int i = 0; i < strlen(s); i++)
    {
        char s[i] = 'a';
        
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
        
    }
    
    return 0;
}