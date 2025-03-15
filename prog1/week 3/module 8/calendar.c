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
int dsinds1800(int year, int month);
int dtotjaar(int year);
int dtotmaand(int year, int month);
int dagen_pm(int year, int month);
int leap(int year);

int main ()
{
    int year = get_int("Year: ");
    int month = get_int("Month: ");
    
    display_calendar(year, month);
    
    return 0;
}

void display_calendar(int year, int month)
{
    display_header(year, month);
    display_grid(year, month);
}

void display_header(int year, int month)
{
    string maand[] = 
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    printf("          %s %i          ", maand[month - 1], year);
    for (int i = 0; i < 27; i++)
    {
        printf("-");
    }
    
    printf("\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
}

void display_grid(int year, int month)
{
    //eerste dag
    int a = dag(year, month);
    
    //dagen per maand
    int b = dagen_pm(year, month);
    
    //spaties
    for (int i = 0; i < a; i++)
    {
        printf("    ");
    }
    
    //nummers printen
    for (int j = 1; j <= b; j++)
    {
        printf("%3d", j);
        printf(" ");
        
        if ((a + j) % 7 == 0)
        {
            printf("\n");
        }
        
        printf("\n");
    }
    
}

int dag(int year, int month)
{
    int dagen = sinds1800(year, month);
    return (dagen + 3) % 7;
}

int sinds1800(int year, int month)
{
    return dtotjaar(year) + dtotmaand(year, month);
}

int dtotjaar(int year)
{
    int x = 0;
    for (int y = 1800; y < year; y++)
    {
        x += (leap(y) ? 366 : 365);
    }
    
    return x;
}

int dtotmaand(int year, int month)
{
    int x = 0;
    
    for (int i = 1; i < month; m++)
    {
        x += dagen_pm(year, i)
    }
    
    return x;
}

int dagen_pm(int year, int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else if (month == 2)
    {
        return leap(year) ? 29 : 28;
    }
    else
    {
        return 0;
    }
}

int leap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
