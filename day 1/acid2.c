#include <stdio.h>
#include <cs50.h>

bool is_acidic(float value); // Function prototype

int main(void)
{
    float input = get_float("Vul het PH level in: ");
    
    // Roep functie aan en print boodschap afhankelijk van het resultaat
    if (is_acidic(input))
    {
        printf("De oplossing is zuur.\n");
    }
    else printf("De oplossing is niet zuur.\n");
}

bool is_acidic(float value)
{
    // Beslis of dit zuur is (ofwel kleiner dan 7.0)
    return value < 7.0;
}
