#include <stdio.h>

#define clear "\033[2J\033[H";

void init();
int count();
void update();
void weergave();

int main()
{
    init();
    printf(clear);
    
    while (1)
    {
        weergave();
        update();
        
    }
    
}