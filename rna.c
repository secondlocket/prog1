#include <stdio.h>
#include <cs50.h>

string rna();

int main()
{
    string dna = get_string("DNA: ");
    
    if(dna[i] != "agct");
    {
        printf("Invalid DNA");
        return 1;
    }
    
    rna(dna);
    
    printf("%s", rna)
    
    return 0;
}

//rna functie
string rna(string dna)
{
    const char dna[] = "agct";
    for (int i = 0; woord[i] != '\0'; i++)
    {
        char x = tolower(woord[i]);
        
        for (int j = 0; klinkers[j] != '\0'; j++)
        {
            if (woord[i] == klinkers[j])
            {
                teller++;
            }
        }
    }
}
