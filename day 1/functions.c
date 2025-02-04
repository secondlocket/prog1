#include <stdio.h>

//programmeren 1 functions opdracht

//prototypes
//ex.1 half functie
int half(int a);
void print_int(int a);

//ex.2 print float functie
void print_float(float a);

//ex.3 average functie
float average(int b, int c);
void print_floatavg(float d);

//ex.4 max functie
float max(float e, float f)
void print_floatmax(float max)

int main(void)
{
    //ex.1 half
    int x = 2;
    int y = half(x);
    print_int(y);
    
   //ex.2 print float
   float n = 2.7444;
   print_float(n);
   
   //ex.3 average
   int b = 67;
   int c = 945;
   float d = average(b, c);
   print_floatavg(d);
   
   //ex.4 max
   float e = 93.2;
   float f = 821.3;
   float max = highest(e,f);
   print_floatmax(max);
   return 0;
   
}

//ex.1 half functie
int half(int a)
{
    return a / 2;
}

void print_int(int a)
{
    printf("Value = %i\n", a);
}

//ex.2 print_float functie 
void print_float(float a) 
{
    printf("Value = %.2f\n", a);
}

//ex.3 average functie 
float average(int b, int c)
{
    return (b + c) / 2.0;
}

void print_floatavg(float d)
{
    printf("Average = %f\n", d);
}

//ex.4 max functie 
float highest(float e, float f)
{
    if (e > f)
        return e;
    else
        return f;
}

printf("The highest value is: %.2f\n", result);


