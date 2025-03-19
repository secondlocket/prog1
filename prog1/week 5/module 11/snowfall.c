#include <stdio.h>
#include <cs50.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 40

char scene[HEIGHT][WIDTH];

void clear_screen();
void init(); //initialisatie

int main ()
{
    init();
    
    int timestep = 0;
    
    update();
    draw()
    
}

void clear_screen()
{
    printf("\033[2J\033[H");
}

void init()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            scene[i][j] = ' ';
        }
    }
}

