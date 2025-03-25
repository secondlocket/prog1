#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

void print_bundles(int numbers[], int n, int bundle_size)
{
    int regels = n / bundle_size;
    int teller = 0;
    int nummer = teller / bundle_size;
    
    //if (remainder regels != 0) 
    //{
    //    regels++;
    //}
    
    for (int i = 0; i < regels; i++)
    {
        printf("[");
        
        for (int j = 0; j < n; j++)
        {
            for (int y = 0; y < bundle_size; y++)
            {
                printf("%i, ", numbers[j]);
                teller++;
            }
            printf("%i]\n", numbers[j + nummer]);
        }
    }
}

int main(void)
{
    int n1 = 7;
    int numbers1[] = {3, 4, 5, 6, 7, 8, 9};
    print_bundles(numbers1, n1, 3);
    printf("\n");

    int n2 = 11;
    int numbers2[] = {20, 15, 14, 16, 37, 45, 5, 18, 4, 3, 2};
    print_bundles(numbers2, n2, 4);
    printf("\n");

    int n3 = 4;
    int numbers3[] = {1, 2, 3, 4};
    print_bundles(numbers3, n3, 10);
    printf("\n");

    print_bundles(numbers3, n3, 1);
    printf("\n");
}
