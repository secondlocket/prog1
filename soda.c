#include <stdio.h>
#include <cs50.h>

int main ()
{
    //te betalen bedrag
    int t = 50;
    //n = money inserted
    int n = 0;
    
    printf("50 cents owed\n");
    
    do 
    {
        //money inserted
        n = get_int ("Insert coin = ");
    
        x = 50 - n;
        
        if (x < 50)
        {
            printf("%.2d cents owed", x);
            continue;
        }
        else
        {
            printf("%d cents change", change);
            break;
        }
        
        if (n != 5 || n != 10 || n != 25)
        {
            printf("Sorry, we only accept 5, 10 or 25 cents, please try again\n");
            continue;
        }
        else
        {
            continue;
        }
    }
    while (n < 50);

    return 0;
}