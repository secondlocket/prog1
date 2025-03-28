#include <stdio.h>
#include <cs50.h>

//ik heb "optie1, optie2, optie3" gebruikt in plaats van "bereken_coupon1
//bereken_coupon2, bereken_coupon3"

float bereken_coupon1(int stuks, float prijs) {
    return (stuks - (stuks/3)) * prijs;
}

float bereken_coupon2(int stuks, float prijs) {
    if (stuks % 2 == 0)
    return stuks * prijs * 3/4;
    else 
    return (stuks - 1)  * prijs * 3/4 + prijs;
}

float bereken_coupon3(int stuks, float prijs) {
    if (stuks == 1)
    return stuks * prijs * 0.95;
    
    else if (stuks == 2)
    return stuks * prijs * 0.9;
    
    else if (stuks == 3)
    return stuks * prijs * 0.8;
    
    else 
    return stuks * prijs * 0.7;
}

int main () {
    int stuks = get_int("Hoeveel stuks koop je? = ");
    float prijs = get_float("Wat is de prijs per stuk? = ");
    
    float eind_prijs1 = bereken_coupon1(stuks, prijs);
    float eind_prijs2 = bereken_coupon2(stuks, prijs);
    float eind_prijs3 = bereken_coupon3(stuks, prijs);
    
    if (eind_prijs1 <= eind_prijs2 && eind_prijs1 <= eind_prijs3) 
    {
    printf("met coupon 1 kost het: %.2f\n", bereken_coupon1(stuks,prijs));
    }
    else if (eind_prijs2 <= eind_prijs1 && eind_prijs2 <= eind_prijs3) 
    {
    printf("met coupon 2 kost het: %.2f\n", bereken_coupon2(stuks,prijs));
    } 
    else 
    {
    printf("met coupon 3 kost het: %.2f\n", bereken_coupon3(stuks,prijs));
    }
    
    return 0;
}

    
