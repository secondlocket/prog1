#include <stdio.h>
#include <cs50.h>

void display_calendar();

int main ()
{
    int year = get_int("Year: ");
    string month = get_string("Month: ");
    
    //hoeveel jaren om te tellen
    int y = year - 1800;
    //hoeveel dagen tussen 
    int dagen = (y % 4) + 365 * (y % 4 * 3);
    
    //display calendar
    //display header
    printf("          %s %i          ", month, year);
    for (int i = 0; i < 27; i++)
    {
        printf("-");
    }

        //display grid
            //first day of month
            //(from_1800 + start_1800) % 7
            //get numbers of month
            //print spaces as padding so day 1 is correctly aligned
            //print the number grid
    
    return 0;
}

void display_calendar()
{
    
}