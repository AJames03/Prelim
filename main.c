#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define sc scanf

// Betinol, Aron James L.
// BSIT-1F
// Find the Celsius and Fahrenheit
int main()
{
    float c, ans;

    p("Celsius : ");
    sc("%f", &c);
    ans = (c*9/5)+32;

    p("Fahrenheit : %.2f \n", ans);
    return 0;
}
