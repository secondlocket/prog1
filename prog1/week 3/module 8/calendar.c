#include <stdio.h>
#include <cs50.h>
#include <string.h>

//int y = jaren verschil
//int d = dagen verschil
//int dag(string maand) geeft welke begindag terug

void display_calendar(int year, int month);
void display_header(int year, int month);
void display_grid(int year, int month);
int maand_nummer(string month);
int dag(int year, int month);
int dagen_pm(int year, int month);
int leap(int year);

//geeft welke dag 1e maand terug
int dag(int dagen)
{
    ((dagen + 3) % 7);
};

int main ()
{
    int year = get_int("Year: ");
    int month = get_int("Month: ");
    
    //display calendar
    //display header
    

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

void display_header(int year, int month);
{
    string maand[] = 
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    printf("          %s %i          ", maand[month + 1], year);
    for (int i = 0; i < 27; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
}

void display_grid(int year, int month)
{
    int a = 
}

int dag(int year, int month)
{
    int dagen = count_days_from_1800(year, month);
    return (dagen + 3) % 7;
}

int dagen_pm(int year, int month)
{
    if (month == 1, 3, 5, 7, 8, 10, 12)
    {
        return 31;
    }
    else if (month == 4, 6, 9, 11)
    {
        return 30;
    }
    else if (month == 2)
    {
        return 
    }
}

int leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year )
}
