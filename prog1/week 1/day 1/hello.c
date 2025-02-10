#include <stdio.h>

int main (void)
{
  char name[100];

 printf("what is your name?\n");
 scanf("%99s", name);
 printf("Hello %s!\n", name);

 return 0;
}