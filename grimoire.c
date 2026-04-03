#include "grimoire.h"

//v1: for loop
double zenith(int n, double x) 
{
    double result = 1;
    for (int i = 0; i < n; i++)
    {
        result *=x;
    }
    return result;
}
//v1: int n, without complex handling.
double origin_nroot(int n, double x)
{
    double x_g = x/n;
    for(int i = 0; ((x-zenith(n,x_g)) > PRECISION || (x-zenith(n,x_g)) < -PRECISION); i++)
    {
       if (i > ITERATIONS)
       {return 701;}
        x_g = x_g - ((zenith(n,x_g)-x) / (n*zenith(n-1,x_g)));
    }
    return x_g;
}
//v1: only +ve integers, and for loop
double stellar_factorial(int x)
{
    if (x < 0) {return 702;}
    if (x == 0) {return 1;}
    if (x == 1) {return 1;}
    double fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}