#include <stdio.h>

#define clear "\033[2J"

void init();
int count();
void update();
void weergave();

int main()
{
    init();
    printf(clear);
    
}