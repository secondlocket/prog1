#include <stdio.h>
#include <cs50.h>

void print_stats(int distances[], int n)
{
    float top_speed = 0.0;
    int speed[n - 1];
    int distance;
    float teller = 0.00;
    
    //speed
    for (int i = 0; i < n - 1; i++)
    {
        int x = distances[i]/1000;
        int y = distances[i + 1]/1000;
        
        speed[i] = (y - x) / 3600;
        
        for (int j = 0; j < n; j++)
        {
            if (speed[j] > speed[j + 1])
            {
                top_speed = speed[j];
            }
            else if (speed[j] == speed[j + 1])
            {
                top_speed = speed[j];
            }
            else 
            {
                top_speed = speed[j + 1];
            }
        }
    }
    
    printf("Top speed: %2f km/h\n", top_speed);
    
    //distance
    for (int i = 0; i < n; i++)
    {
        if (distances[i] > distances[i + 1])
        {
            teller += 400.00;
        }
    }
    
    printf("Total distance = %2f\n", teller);
    
}

int main(void)
{
    int distances1[] = {0, 90, 170, 250, 325, 400};
    print_stats(distances1, 6);

    int distances2[] = {0, 70, 140, 210, 270, 330, 390, 50, 100, 150, 200};
    print_stats(distances2, 11);

    int distances3[] = {
        0, 65, 125, 190, 250, 310, 370, 30, 90,
        150, 210, 270, 330, 380, 40, 100, 150, 200
    };
    print_stats(distances3, 18);
}
