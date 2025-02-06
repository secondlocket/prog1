#include <stdio.h>
#include <cs50.h>

int main () {
    int stuks = get_int("Hoeveel stuks koop je? = ");
    float prijs = get_float("Wat is de prijs per stuk? = ");
    printf("met coupon x kost het: %f\n", optiex(stuks,prijs));
    break
    
    return 0;
    
}

float optie1(int stuks, float prijs) {
    return (stuks - (stuks/3)) * prijs;
}

float optie2(int stuks, float prijs) {
    if (stuks % 2 == 0)
    return stuks * prijs * 1.5;
    else 
    return (stuks - 1)  * prijs * 1.5 + prijs;
}

float optie3(int stuks, float prijs) {
    if (stuks == 1)
    return stuks * prijs * 0.95;
    
    else if (stuks == 2)
    return stuks * prijs * 0.9;
    
    else if (stuks == 3)
    return stuks * prijs * 0.8;
    
    else 
    return stuks * prijs * 0.7;
}