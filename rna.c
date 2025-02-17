#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string rna(string dna);

int main()
{
    string dna = get_string("DNA: ");
    
    //controleren
    for (i = 0; i < strlen(dna); i++)
    {
        char x = toupper(dna[i]);
        
        if(dna[i] != 'a', 'g', 'c', 't')
        {
            printf("Invalid DNA");
            return 1;
        }
    }
    
    string rna_sequence = rna(dna);
    printf("%s\n", rna_sequence);
    
    return 0;
}

//rna functie
string rna(string dna)
{
    const char dna[] = "agct";
    
    for (int i = 0; i < strlen(dna); i++)
    {
        
        for (int j = 0; dna[j] != "agct"; j++)
        {
            if (dna[i] == 'A')
            {
                dna[i] = 'U';
            }
            else if (dna[i] == 'G')
            {
                dna[i] = 'C';
            }
            else if (dna[i] == 'C')
            {
                dna[i] = 'G';
            }
            else if (dna[i] == 'T')
            {
                dna[i] = 'A';
            }
        }
    }
}
