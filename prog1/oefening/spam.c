#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void spam_check(string input)
{
    int characters = 0;
    int non_chars = 0;
    int n = strlen(input);

    if (n == 0)
    {
        printf("Deze mail heeft geen subject\n");
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (input[i] == ' ')
        {
            continue;
        }
        
        if (!isalpha(input[i]))
        {
            non_chars++;
            characters++;
        }
        else if (isalpha(input[i]))
        {
            characters++;
        }
    }

    int percent = round(((float)non_chars / characters) * 100);
    printf("Er zijn %i procent niet-alfabetische karakters.\n", percent);

    if (percent > 10)
    {
        printf("Deze mail is spam.\n");
    }
    else
    {
        printf("Deze mail is normaal.\n");
    }
  
}

int main()
{
  string input = get_string("-> ");
  spam_check(input);

  return 0;
}
