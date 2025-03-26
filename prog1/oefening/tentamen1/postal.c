#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void print_postal_code(string address)
{
    int lengte = strlen(address);
    
    for (int i = 0; i < lengte; i++)
    {
        if (isdigit(address[i]) && isdigit(address[i + 1]) && isdigit(address[i + 2]) && isdigit(address[i + 3]) && isalpha(address[i + 4]) && isalpha(address[i + 5]))
        {
            printf("%i%i%i%i%c%c", address[i], address[i + 1], address[i + 2], address[i + 3], address[i + 4], address[i + 5]);
        }
    }
    printf("\n");
}

int main(void)
{
    string address1 = "Dorpsstraat 34 1234AB";
    print_postal_code(address1);

    string address2 = "1337yo Hoofdstraat 1226a";
    print_postal_code(address2);

    string address3 = "Hugo de Vrieslaan 1506HF 37AB";
    print_postal_code(address3);

    string address4 = "1403Yz 319 Fooweg";
    print_postal_code(address4);
}
