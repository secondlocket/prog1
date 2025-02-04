#include <stdio.h>

int main (void)
{
  char name[100];

 printf("what is your name?\n");
 scanf("%99", &name);
 printf("Your name is %c", name);

 return 0;
}

