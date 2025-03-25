#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

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
        char a = input[i];
        int b = atoi(a);

        if (b <= 64 || b >= 91 && b <= 96 || b >= 123)
        {
            non_chars++;
            characters++;
        }
        else if (b != 0)
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
