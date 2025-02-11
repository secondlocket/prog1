#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n = 0;
    
    printf("50 cents owed");
    
    //x = money owed
    int x = 50 - n;
    //change 
    int change = x - 50;
    
    do 
    {
        // money inserted
        n = get_int ("Insert coin = \n")
        
        if (n != 5 || n != 10 || n != 25)
        {
            printf("Sorry, we only accept 5, 10 or 25 cents, please try again");
        }
        else
        {
            continue;
        }
        
        if (x < 50)
        {
            printf("%.2d cents owed", x)
            continue;
        }
        else
        {
            printf("%d cents change", change)
            break;
        }
    }
    while (n < 50)
    
    return 0;
}