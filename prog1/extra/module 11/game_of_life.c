#include <stdio.h>
#include <unistd.h>

//regels
//1: Any live cell with fewer than two live neighbours dies, as if by underpopulation.
//2: Any live cell with two or three live neighbours lives on to the next generation.
//3: Any live cell with more than three live neighbours dies, as if by overpopulation.
//4: Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.

#define CLEAR "\033[2J\033[H";
#define PAUZE 100000
#define HOOGTE 40
#define BREEDTE 40

void init();
int burentellen(int a, int b);
void update();
void weergave();

int grid[HOOGTE][BREEDTE] = {0};
int newgrid[HOOGTE][BREEDTE] = {0};

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
        {1, 3}, {1, 4}, {1, 9}, {1, 10},
        {2, 2}, {2, 5}, {2, 8}, {2, 11},
        {3, 1}, {3, 6}, {3, 7}, {3, 12},
        {4, 2}, {4, 11}, 
        {5, 3}, {5, 10},
        {6, 4}, {6, 9},
        {7, 5}, {7, 7},
        {8, 6},
    }
    
    //aantal cellen
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

int burentellen(int i, int j)
{
    int count = 0;
    
    //loop door alle buren om de cell heen behalve de cell zelf
    for (int di = - 1; di <= 1; di++)
    {
        for (int dj = -1; dj <= 1; dj++)
        {
            if (di == 0 && dj == 0)
            {
                continue;
            }
            
            int ni = i + di;
            int nj = j + dj;
            
            if (ni >= 0 && nj < HOOGTE && nj >= 0 && nj < BREEDTE)
            {
                count += grid[ni][nj];
            }
        }
    }
    
    return count;
}

void update()
{
    for (int i = 0; i < HOOGTE; i++)
    {
        for (int j = 0; j < BREEDTE; j++)
        {
            int buren = burentellen(i, j);
            
            if (grid[i][j] == 1)
            {
                newgrid[i][j] = 
            }
        }
    }
}