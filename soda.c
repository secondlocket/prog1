#include <stdio.h>
#include <cs50.h>

int main ()
{
    printf("50 cents owed")
    
    //x = money owed
    int x = 50 - n
    int owed = x - 50
    
    do 
    {
        // money inserted
        int n = get_int ("Insert coin = \n")
        
        if (x < 50)
        {
            printf("%.2d cents owed", x)
            continue;
        }
        else
        {
            printf("%.2d cents change", owed)
            break;
        }
    }
    while (n < 50)
    
    return 0;
}