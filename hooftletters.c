#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main ()
{
    int teller = 0;
    //0 is niet binnen en 1 is wel binnen
    int binnen = 0;
    
    string tekst = get_string("Tekst: ");

    for (int i = 0; tekst[i] != '\0'; i++)
    {
        if (binnen == 0 && isupper(tekst[i]))
        {
            binnen = 1;
            teller ++;
        }
        else if (islower(tekst[i]))
        else if (tekst[i] == ' ')
        {
            binnen = 0;
        }
    }
    
    printf("%d woord%s met een hoofdletter\n", teller, teller == 1 ? "" : "en");
    
    return 0;
}