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
int leap(int year);

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
    
    //berekeningen
    //jaren verschil
    int y = year - 1800;
    //dagen verschil
    int dagen = (y % 4) + 365 * (y % 4 * 3);
    
    return 0;
}

maand(string month)
{
    const char *month[] = 
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    }
}

dag(int maand, int year)
{
    (dagen + 3 % 7);
}

leap(int year)
{
    if (year % 400 != 0)
    {
        if (year % 4 == 0)
        {
            leap = year / 4;
        }
    }
    else if (year % 400 == 0)
    {
        leap = year / 4 - (year / 400);
    }
}
