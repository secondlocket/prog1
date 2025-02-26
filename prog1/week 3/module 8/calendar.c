#include <stdio.h>
#include <cs50.h>

//int year
//string month
//int y = jaren verschil
//int d = dagen verschil
//int dag(string maand) geeft welke begindag terug

int dag(string maand);

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

    //berekeningen
    //jaren verschil
    int y = year - 1800;
    //dagen verschil
    int dagen = (y % 4) + 365 * (y % 4 * 3);
    
    
    
        //display grid
            //first day of month
            
            //get numbers of month
            //print spaces as padding so day 1 is correctly aligned
            //print the number grid
    
    return 0;
}

int dag(string maand)
{
    (from_1800 + start_1800) % 7
}