#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main ()
{
    string woord1 = ("Woord 1: ");
    string woord2 = ("Woord 2: ");
    
    for (i = 0; i < strlen(woord1); i++)
    {
        woord1[i] = tolower(woord1[i]);
    }
    
}