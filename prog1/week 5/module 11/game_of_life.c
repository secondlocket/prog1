#include <stdio.h>
#include <unistd.h>

#define CLEAR "\033[2J\033[H";
#define 

void init();
int count();
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
        
    }
    
}