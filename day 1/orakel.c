#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool check_answer(string antwoord);

int main(void)
{
    string antwoord = get_string("De grote vraag van het leven, het universum en alles daarbij: ");
    
    if (check_answer(antwoord))
    {
        printf("Ja"\n);
    }
    else
    {
        printf("Nee, probeer opnieuw!"\n);
    }
}

bool check_answer(string antwoord)
{
    return (strcmp(antwoord, "42") == 0 ||
    strcmp(antwoord, "tweeenveertig") == 0 ||
    strcmp(antwoord, "forty two") == 0 ||
    strcmp(antwoord, "forty-two") == 0);
}