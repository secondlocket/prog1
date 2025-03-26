#include <stdio.h>
#include <cs50.h>
#include <math.h>

int tel_hordes(int afstanden[], int n, int baanlengte)
{
    //TODO
    int hordes = 0;
    int ronde = 0;
    int laatste_afstand = baanlengte % 30;
    int aantal_hordes = round(baanlengte / 30);
    int totaal_afstand = 0;
    
    
    for (int i = 0; i < n - 1; i++)
    {
        if (afstanden[i] > afstanden[i + 1])
        {
            ronde++;
        }
    }
    
    if (ronde )
    if (afstanden[n - 1] > afstanden[n - 2])
    {
        totaal_afstand += afstanden[n];  
    }
    
    totaal_afstand += baanlengte * ronde;
    hordes = round((float)(totaal_afstand / ronde) * aantal_hordes);
    
    if (ronde == 0)
    {
        if (afstanden[n - 1] % 30 != 0)
        {
            totaal_afstand = afstanden[n - 1];
        }
    }
    
    return hordes;
}

int main(void)
{
    int afstanden1[] = {0, 30, 60, 90, 120, 150};
    int n1 = 6;
    int baanlengte1 = 400;
    printf("%i\n", tel_hordes(afstanden1, n1, baanlengte1));
    
    int afstanden2[] = {0, 40, 75, 5, 35, 70, 100};
    int n2 = 7;
    int baanlengte2 = 100;
    printf("%i\n", tel_hordes(afstanden2, n2, baanlengte2));
    
    int afstanden3[] = {0, 25, 50, 75, 25, 50, 75, 25, 50};
    int n3 = 9;
    int baanlengte3 = 75;
    printf("%i\n", tel_hordes(afstanden3, n3, baanlengte3));
    
    int afstanden4[] = {0, 20, 50, 80, 100, 20, 40, 60};
    int n4 = 8;
    int baanlengte4 = 100;
    printf("%i\n", tel_hordes(afstanden4, n4, baanlengte4));
}