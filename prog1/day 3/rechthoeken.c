#include <stdio.h>
#include <cs50.h>

int oppervlakte(int lengte, int breedte) {
    return lengte * breedte;
}

int main() {
    // Invoer van de rechthoekafmetingen
    int lengte1 = get_int("Voer de lengte van de eerste rechthoek in: \n");
    int breedte1 = get_int("Voer de breedte van de eerste rechthoek in:\n");
    
    int lengte2 = get_int("Voer de lengte van de tweede rechthoek in: \n");
    int breedte2 = get_int("Voer de breedte van de tweede rechthoek in:\n");
    
    char keuze = get_char()
}