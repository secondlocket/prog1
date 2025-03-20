#include <stdio.h>
#include <unistd.h>

#define CLEAR "\033[2J\033[H";
#define PAUZE 100000
#define HOOGTE 40
#define BREEDTE 40

void init();
int tellen();
void update();
void weergave();

int grid[HOOGTE][BREEDTE] = {0};

int main()
{
    init();
    printf(CLEAR);
    
    while (1)
    {
        weergave();
        update();
        usleep(PAUZE);
    }
    
    return 0;
}

void init()
{
    //coordinatoren van levende cellen opslaan
    int pattern[][2] =
    {
        {1, 3}, {1, 4}, {1, 9}, {1, 10}
        {2, 3}, {2,}
    }
    
    int n = sizeof(pattern) / sizeof(pattern[0]);
    
    for (int i = 0; i < n; i++)
    {
        int r = pattern[i][0]; //rij
        int k = pattern[i][1]; //kolom
        if (r >= 0 && r < 40 && k >= 0 && k < 40)
        {
            grid[r][k] = 1;
        }
    }
}