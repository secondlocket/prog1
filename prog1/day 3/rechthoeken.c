#include <stdio.h>
#include <cs50.h>

int oppervlakte(int lengte, int breedte) {
    return lengte * breedte;
}

int main() {
    int lengte1, breedte1, lengte2, breedte2;
    char keuze;
    
    // Invoer van de rechthoekafmetingen
    printf("Voer de lengte van de eerste rechthoek in: \n");
    scanf("%d", &lengte1);
    printf("Voer de breedte van de eerste rechthoek in: \n");
    scanf("%d", &breedte1);
    printf("Voer de lengte van de tweede rechthoek in: \n");
    scanf("%d", &lengte2);
    printf("Voer de breedte van de tweede rechthoek in: \n");
    scanf("%d", &breedte2);

    {
        // Menu tonen
        printf("\nKies een optie:\n");
        printf("1 - Oppervlakte van de eerste rechthoek\n");
        printf("2 - Oppervlakte van de tweede rechthoek\n");
        printf("V - Verschil in oppervlakte (eerste - tweede)\n");
        printf("S - Som van de oppervlaktes\n");
        printf("Q - Afsluiten\n");
        printf("Maak een keuze: ");
        scanf(" %c", &keuze);
        
        switch (keuze) {
            case '1':
                printf("Oppervlakte van de eerste rechthoek: %d\n", oppervlakte(lengte1, breedte1));
                break;
            case '2':
                printf("Oppervlakte van de tweede rechthoek: %d\n", oppervlakte(lengte2, breedte2));
                break;
            case 'V':
            case 'v':
                printf("Verschil in oppervlakte: %d\n", oppervlakte(lengte1, breedte1) - oppervlakte(lengte2, breedte2));
                break;
            case 'S':
            case 's':
                printf("Som van de oppervlaktes: %d\n", oppervlakte(lengte1, breedte1) + oppervlakte(lengte2, breedte2));
                break;
            case 'Q':
            case 'q':
                printf("Programma afgesloten.\n");
                break;
            default:
                printf("Ongeldige keuze, probeer opnieuw.\n");
        }
    } while (keuze != 'Q' && keuze != 'q');
    
    return 0;
}