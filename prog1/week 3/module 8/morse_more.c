#include <stdio.h>
#include <cs50.h>

//naar_morse functie (van dit ".", dah "-" en spaties)


int main()
{
    string invoer = get_string("Code: ");
    
    for (int i = 0; i < strlen(invoer); i++)
    
    string morse[i] = naar_morse(invoer[i]);
    
    return 0;
}

