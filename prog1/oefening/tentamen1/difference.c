#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void print_difference(string a, string b)
{
    int lengte1; 
    int lengte2;
    int diff;
    
    if (strlen(a) > strlen(b))
    {
        lengte1 = strlen(a);
        lengte2 = strlen(b);
        diff = strlen(a) - strlen(b);
    }
    else if (strlen(b) > strlen(a))
    {
        lengte1 = strlen(b);
        lengte2 = strlen(a);
        diff = strlen(b) - strlen(a);
    }
    else
    {
        lengte1 = strlen(a);
        lengte2 = 0;
        diff = 0;
    }
    
    for (int i = 0; i < lengte1; i++)
    {
        char c = a[i];
        char d = b[i];
        
        if (isalpha(c) && isalpha(d))
        {
            for (int j = 0; j < lengte2; j++)
            {
                if (c == d)
                {
                    printf("-");
                }
                else if (c != d)
                {
                    printf("#");
                } 
            }
        }
        else
        {
            for (int x = 0; x < diff; x++)
            {
                printf("+");
            }
        }
    }
    
    printf("\n");
}

int main(void)
{
    string a0 = "abc";
    string b0 = "ad";
    print_difference(a0, b0);
    
    string a1 = "abcdefghij";
    string b1 = "abxdefyhij";
    print_difference(a1, b1);

    string a2 = "abc";
    string b2 = "abcdef";
    print_difference(a2, b2);

    print_difference(b2, a2);

    string a3 = "FoobaR";
    string b3 = "foobar!";
    print_difference(b3, a3);

    return 0;
}
