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