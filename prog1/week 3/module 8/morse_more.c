#include <stdio.h>
#include <cs50.h>

//naar morse functie
string naar_morse(string c)
{
    if (c == ",,,,,,,")
    {
        return c = " ";
    }
    else if (c == ",,,")
    {
        return c = " ";
    }
    else if (c == "===")
    {
        return c = "-";
    }
    else if (c == "=")
    {
        return c = ".";
    }
    else if (c == ",")
    {
        return c = " ";
    }
    
    return c;
}

char naar_tekst(string c)
{
    //4
    if (c = "-...")
    {
        return 'b';
    }
    else if (c = "-.-.")
    {
        return 'c';
    }
    else if (c = "..-.")
    {
        return 'f';
    }
    else if (c = "....")
    {
        return 'h';
    }
    else if (c = ".---")
    {
        return 'j';
    }
    else if (c = ".-..")
    {
        return 'l';
    }
    else if (c = ".--.")
    {
        return 'p';
    }
    else if (c = "....")
    {
        return 'h';
    }
    //bijzonder 2
    else if (c = "..")
    {
        return 'i';
    }
    //bijzonder 2
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    else if (c = ".-")
    {
        return 'a';
    }
    
    return c;
}

int main()
{
    string invoer = get_string("Code: ");
    
    char morse[i] = naar_morse(invoer[i]);
    
    return 0;
}

