#include <stdio.h>
#include <cs50.h>
#include <string.h>

//int year
//string month
//int y = jaren verschil
//int d = dagen verschil
//int dag(string maand) geeft welke begindag terug

int maand(string month);
int dag(int maand);

int main ()
{
    int year = get_int("Year: ");
    string month = get_string("Month: ");
    
    //display calendar
    //display header
    printf("          %s %i          ", month, year);
    for (int i = 0; i < 27; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    
    printf("  %i", nummer);
    
    //berekeningen
    //jaren verschil
    int y = year - 1800;
    //dagen verschil
    int dagen = (y % 4) + 365 * (y % 4 * 3);
    
    return 0;
}

int maand(string month)
{
    m[1, ..., 12];
    if (strcmp(month, "Jan")
}

int dag(int maand, int year)
{
    (dagen + 3 % 7);
}

