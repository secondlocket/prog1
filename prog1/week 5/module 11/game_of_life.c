#include <stdio.h>
#include <unistd.h>

#define CLEAR "\033[2J\033[H";
#define PAUZE 100000

void init();
int tellen();
void update();
void weergave();

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