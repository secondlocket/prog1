#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int punten[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10];

int functie (string x)
{
    int score = 0;
    
    for(int i = 0; x[i] != '\0'; i++)
    {
        int index = tolower(x[i]) - 'a';
        score += punten[index];
    }
}

int main ()
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    
    int lengte = strlen(player1);
    
    for (int i = 0; i < lengte; i++)
    {
        char c = player1[i];
        islower(c)
        
        
    }

}