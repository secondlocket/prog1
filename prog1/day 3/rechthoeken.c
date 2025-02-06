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
    int breedte2 = get_int("Voer de breedte van de tweede rechthoek in: \n");
    
    char keuze = get_char("Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? \n");
    
    switch(keuze){
        case '1':
        printf("oppervlakte van de eerste rechthoek: %d\n", oppervlakte(lengte1, breedte1));
                break;
        case '2':
        printf("oppervlakte van de tweede rechthoek: %d\n", oppervlakte(lengte2, breedte2));
                break;
        case 'S':
        printf("de som van de oppervlakte van beide rechthoeken: %d\n", (oppervlakte(lengte1, breedte1)-)
        case 'V'
    }
    
}