#include <stdio.h>
#include <cs50.h>
#include <string.h>

int verkoopprijs(string invoer)
{
    int wijk = 0;
    int n = strlen(invoer);
    
    for (int i = 0; i < n; i++)
    {
        if (strcmp(invoer, "wijk 1") == 0)
        {
            wijk = 1;
        }
        else if (strcmp(invoer, "wijk 2") == 0)
        {
            wijk = 2;
        }
    }
}


int main()
{
    string invoer = get_string("");
    
    int prijs = verkoopprijs(invoer);
    
    printf("De waarde van het huis is EUR %i,-", prijs)
    
    return 0;
}