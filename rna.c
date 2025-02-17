#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string rna(string dna);
char rna_sequence;

int main()
{
    string dna = get_string("DNA: ");
    
    //controleren
    for (int i = 0; i < strlen(dna); i++)
    {
        char x = toupper(dna[i]);
        
        if(strchr("AGCT", x) == NULL)
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
    for (int i = 0; i < strlen(dna); i++)
    {
        char x = toupper(dna[i]);
        if (x == 'A')
        {
            rna_sequence[i] = 'U';
        }
        else if (dna[i] == 'G')
        {
            rna_sequence[i] = 'C';
        }
        else if (dna[i] == 'C')
        {
            rna_sequence[i] = 'G';
        }
        else if (dna[i] == 'T')
        {
            rna_sequence[i] = 'A';
        }
    }
    
    return rna_sequence[i];
}

