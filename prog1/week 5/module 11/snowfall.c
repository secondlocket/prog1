#include <stdio.h>
#include <cs50.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 40

char scene[HEIGHT][WIDTH];

void clear();
void init(); //initialisatie
void draw();
void snowflakes();
void update();

int main ()
{
    srand(time(NULL));
    init();
    
    int timestep = 0;
    
    update();
    draw();
    
}

void clear()
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

void draw()
{
    clear();
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            printf("%c", scene[i][j]);
        }
    }
    
}

void snowflakes()
{
    int n = rand() % 3;
    for (int i = 0; i < n; i++)
    {
        int x = rand() % WIDTH;
        if (scene[0][x] == ' ')
        {
            scene[0][x] = '*';
        }
    }
    
    for (int i = HEIGHT; i >= 0; i--)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (scene[i][j] == '*')
            {
                
            }
        }
    }
}
