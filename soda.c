#include <stdio.h>
#include <cs50.h>

int main ()
{
    int n = 0;
    
    printf("50 cents owed\n");
    
    //x = money owed
    int x = 50 - n;
    //change 
    int change = x - 50;
    
    do 
    {
        // money inserted
        n = get_int ("Insert coin = ");
        
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
    }
    while (n < 50);
    
    return 0;
}