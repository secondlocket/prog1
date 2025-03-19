#include <stdio.h>
#include <cs50.h>

#define WIDTH 80
#define HEIGHT 40

char scene[HEIGHT][WIDTH];

void clear_screen(void);

int main ()
{
    
}

void clear_screen(void)
{
    printf("\033[2J\033[H");
}

