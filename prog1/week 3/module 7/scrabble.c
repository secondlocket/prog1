#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int punten[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int functie (string x)
{
    int score = 0;
    
    for (int i = 0; x[i] != '\0'; i++)
    {
        int index = tolower(x[i]) - 'a';
        
        if (index >= 0 && index < 26)
        {
            score += punten[index];
        }
    }
    return score;
}

int main ()
{
    int punten1 = 0;
    int punten2 = 0;
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    
    int lengte = strlen(player1);
    
    for (int i = 0; i < lengte; i++)
    {
        punten1 = functie(player1);
        punten2 = functie(player2);
    }
    
    if (punten1 > punten2)
    {
        printf("Player 1 wins!");
    }
    else if (punten2 > punten1)
    {
        printf("Player 2 wins!");
    }
    else if (punten1 == punten2)
    {
        printf("Tie!");
    }
    else
    {
        printf("Error");
    }

    return 0;
}