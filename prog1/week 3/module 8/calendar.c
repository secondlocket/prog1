#include <stdio.h>
#include <cs50.h>
#include <string.h>

//int year
//string month
//int y = jaren verschil
//int d = dagen verschil
//int dag(string maand) geeft welke begindag terug

//weergeven functie
void display_calendar(int year, int month);
void display_header
void display_grid(int year, int month);

//geeft maand nummer terug
int maand_nummer(string month)
{
    string maand[] = 
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    for (int i = 0; i < 12; i++)
    {
        if (strcmp(month, maand[i]) == 0)
        {
            return i + 1;
        }
    }
    
    return -1;
}

//geeft welke dag 1e maand terug
int dag(int dagen)
{
    ((dagen + 3) % 7);
};

//geeft schikkeljaar? terug
int leap(int year)
{
    int a
    
    if (year % 400 != 0)
    {
        if (year % 4 == 0)
        {
            a = year / 4;
        }
    }
    else if (year % 400 == 0)
    {
        a = year / 4 - (year / 400);
    }
    
    return a;
}

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
    dag(dagen);
    
    display_calendar(year, month);
    
    return 0;
}

void display_calendar(int year, int month)
{
    display_header(year, month);
    display_grid(year, month);
}




