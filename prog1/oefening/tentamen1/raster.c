#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

void print_raster(string line1, string line2, string line3)
{
    int lengte1 = strlen(line1);
    int lengte2 = strlen(line2);
    int lengte3 = strlen(line3);
    int lengte;
    int header = 0;
    
    //lengte header bepalen
    if (lengte3 > lengte2 && lengte3 > lengte1)
    {
        lengte = lengte3;
        header = lengte * 2 + 1;
    }
    else if (lengte2 > lengte3 && lengte2 > lengte1)
    {
        lengte = lengte2;
        header = lengte * 2 + 1;
    }
    else if (lengte1 > lengte3 && lengte1 > lengte2)
    {
        lengte = lengte2;
        header = lengte * 2 + 1;
    }
    else if (lengte1 == lengte3 && lengte1 == lengte2)
    {
        lengte = lengte1;
        header = lengte * 2 + 1;
    }
    else
    {
        printf("error");
    }
    
    //header printen
    for (int j = 0; j < header; j++)
    {
        printf("-");
    }
    printf("\n");
    
    //main
    //line 1
    printf("|");
    for (int i = 0; i < lengte; i++)
    {
        char c = line1[i];
    
        if (isalpha(c) == 1)
        {
            printf("%c", c);
            printf("|");
        }
        else if (isalpha(c) == 0)
        {
            for (int j = 0; j < lengte - lengte1; j++)
            {
                printf(" ");
                printf("|");
            }
        }
    }
    printf("\n");
    
    
    //line 2
    printf("|");
    for (int i = 0; i < lengte; i++)
    {
        char c = line2[i];
    
        if (isalpha(c) == 1)
        {
            printf("%c", c);
            printf("|");
        }
        else if (isalpha(c) == 0)
        {
            for (int j = 0; j < lengte - lengte2; j++)
            {
                printf(" ");
                printf("|");
            }
        }
    }
    printf("\n");
    
    
    //line 3
    printf("|");
    for (int i = 0; i < lengte; i++)
    {
        char c = line3[i];
    
        if (isalpha(c) == 1)
        {
            printf("%c", c);
            printf("|");
        }
        else if (isalpha(c) == 0)
        {
            for (int j = 0; j < lengte - lengte3; j++)
            {
                printf(" ");
                printf("|");
            }
        }
    }
    printf("\n");
    
    //laatste regel printen
    for (int j = 0; j < header; j++)
    {
        printf("-");
    }
    printf("\n");
}

int main(void)
{
    print_raster("abc", "de", "fghi");
    print_raster("a", "b", "c");
    print_raster("minor", "programmeren", "tentamen");
}
