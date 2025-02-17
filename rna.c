#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

string rna(string dna);

int main()
{
    string dna = get_string("DNA: ");
    
    //controleren
    for (int i = 0; i < strlen(dna); i++)
    {
        char x = toupper(dna[i]);
        
        if(dna[i] |= 'A', 'G', 'C', 'T')
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
    
    return dna[i];
}

