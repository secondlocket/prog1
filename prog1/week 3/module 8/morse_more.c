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
    else if (c = "--.-")
    {
        return 'q';
    }
    else if (c = "...-")
    {
        return 'v';
    }
    else if (c = "-..-")
    {
        return 'x';
    }
    else if (c = "-.--")
    {
        return 'y';
    }
    else if (c = "--..")
    {
        return 'z';
    }
    
    //3
    else if (c = "-..")
    {
        return 'd';
    }
    else if (c = "--.")
    {
        return 'g';
    }
    else if (c = "-.-")
    {
        return 'k';
    }
    else if (c = "---")
    {
        return 'o';
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

