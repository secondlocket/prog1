#include <stdio.h>
#include <cs50.h>

int main () 
{
    int n;
    do 
    {
        n = get_int("hoe hoog moet de driehoek zijn? = ");
    }
    while(n < 5 || n > 20);
    
    for(int i = 0; i < n; i++)
    {
        
    }
}