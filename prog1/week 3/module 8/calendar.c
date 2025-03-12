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
    string month[]
    {
        
    }
    
    
    printf("          %s %i          ", month, year);
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

//geeft maand nummer terug (Jan = 1 ... Dec = 12)
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

int dag(int year, int month)
{
    int dagen = count_days_from_1800(year, month);
    return (dagen + 3) % 7;
}
