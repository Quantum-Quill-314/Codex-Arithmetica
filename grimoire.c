#include "grimoire.h"
#define PIE 3.1415926

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
//v1:
int anchor(double x)
{
    if (x < 0)
    {
        if ((int)x - x == 0) {return (int)x;}
        else {return ((int)x -1);}
    }
    if (((int)x - x == 0 || x >= 0)) {return (int)x;}
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

//Trig Suite
//v1: without floating-point rounding handling and only radians
double astral_sin(double x)
{
    if (x > (2*PIE)) //reducing to [0,2π]
    {
        int q = anchor(x/(2*PIE));
        x = x - q*2*PIE;
    } 
    int multiplier = 1;
    //mapping to [0, π/2]
    if ((x >= (PIE/2)) && (x <= PIE))
    {
        x = PIE - x;
        multiplier = 1;
    }
    else if ((x >= PIE) && (x <= ((3*PIE)/2)))
    {
        x = x - PIE;
        multiplier = -1;
    }
    else if ((x >= ((3*PIE)/2)) && (x <= (2*PIE)))
    {
        x = (2*PIE - x);
        multiplier = -1;
    }

    //handling x between [π/4, π/2]
    if ((x >= (PIE/4)) && (x <= (PIE/2)))
    {return multiplier * astral_cos((PIE/2)-x);}
    
    double sinx = (x - zenith(3,x)/6), term = -zenith(3,x)/6;
    for (int i = 2; i < 15; i++)
    {
        term = term * (-zenith(2,x)/((2*i)*(2*i+1)));
        sinx = sinx + term;
    }
    return sinx*multiplier;
}
//v1: without floating-point rounding handling and only radians
double astral_cos(double x)
{
    if (x > (2*PIE)) //reducing to [0,2π]
    {
        int q = anchor(x/(2*PIE));
        x = x - q*2*PIE;
    } 
    int multiplier = 1;
    //mapping to [0, π/2]
    if ((x >= (PIE/2)) && (x <= PIE))
    {
        x = PIE - x;
        multiplier = -1;
    }
    else if ((x >= PIE) && (x <= ((3*PIE)/2)))
    {
        x = x - PIE;
        multiplier = -1;
    }
    else if ((x >= ((3*PIE)/2)) && (x < (2*PIE)))
    {
        x = (2*PIE - x);
        multiplier = 1;
    }
    //handling x between [π/4, π/2]
    if ((x >= (PIE/4)) && (x <= (PIE/2)))
    {return multiplier * astral_sin((PIE/2)-x);}

    double cosx = 1 - (zenith(2,x)/2), term = -zenith(2,x)/2;
    for (int i = 2; i < 15; i++)
    {
        term = term * (-zenith(2,x)/((2*i)*(2*i-1)));
        cosx = cosx+term;
    }
    return cosx*multiplier;
}