#include <stdio.h>
#include <cs50.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 40
#define TIMESTEP 100
#define INTERVAL 5

char scene[HEIGHT][WIDTH];

void clear();
void init(); //initialisatie
void draw();
void snowflakes();
void pauze();

int main ()
{
    srand(time(NULL));
    init();
    draw();
    
    int timestep = 0;
    
    while(1)
    {
        if (timestep % |INTERVAL == 0)
        {
            snowflakes();
        }
        
        draw();
        timestep++;
        
        pauze(TIMESTEP);
    }
    
    return 0;
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
    //sneeuwvlokken maken
    int n = rand() % 4; //1-3 nieuwe sneeuwvlokken elke keer
    for (int i = 0; i < n; i++)
    {
        int x = rand() % WIDTH;
        if (scene[0][x] == ' ')
        {
            scene[0][x] = '*';
        }
    }
    
    //sneeuwvlokken vallen
    for (int i = HEIGHT; i >= 0; i--)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            if (scene[i][j] == '*')
            {
                if (scene[i + 1][j] == ' ')
                {
                    scene[i + 1][j] == '*';
                    scene[i][j] = ' ';
                }
            }
        }
    }
}

void pauze (int t)
{
    struct timespec ts;
    ts.tv_sec = t / 1000; //seconden
    ts.tv_nsec = (ms % 1000) * 1000000 //nanoseconden
    nanosleep(&ts, NULL);
}
