#include <stdio.h>
#include <cs50.h>

int main ()
{
    //te betalen bedrag
    int t = 50;
    //n = geld ingevoerd 
    int ins = 0;
    
    printf("50 cents owed\n");
    
    do 
    {
        //money inserted
        n = get_int ("Insert coin = ");
        
        if (n != 5 && n != 10 && n != 25)
        {
            printf("Sorry, we only accept 5, 10 or 25 cents, please try again\n");
            continue;
        }
        
        ins += n;
        
        if (ins < t)
        {
            printf("%.2d cents owed\n", (t - ins));
        }
        else
        {
            printf("%d cents change\n", ins - total);
            break;
        }
        
        
    }
    while (n < 50);

    return 0;
}