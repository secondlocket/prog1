#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string invoer = get_string("");
    
    int wijk = 0;
    int n = strlen(invoer);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(invoer, "wijk 1"))
        {
            wijk = 1;
        }
    }
}