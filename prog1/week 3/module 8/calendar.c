#include <stdio.h>
#include <cs50.h>

void display_calendar();

int main ()
{
    int start
    int year = get_int("Year: ");
    string month = get_string("Month: ");

    //calendar weergeven
    //header weergeven
    printf("          %s %i          \n", month, year);
    for (int i = 0; i < 27; i++)
    {
        printf("-");
    }
    printf("\n");

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