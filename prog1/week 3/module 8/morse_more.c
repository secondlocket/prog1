#include <stdio.h>
#include <cs50.h>

//naar morse functie
string naar_morse(string c)
{
    if (c == ",,,,,,,")
    {
        return c = ' ';
    }
    else if (c == ",,,")
    {
        return c = ' ';
    }
    else if (c == "===")
    {
        return c = '-'';
    }
    else if (c == "=")
    {
        return c = '.';
    }
    else if (c == ",")
    {
        return c = ' ';
    }
    
    return c;
}

char naar_tekst(char c)
{
    
}

int main()
{
    string invoer = get_string("Code: ");
    
    char morse[i] = naar_morse(invoer[i]);
    
    return 0;
}

