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
//v2: With Horner's Polynomial and only radian
double astral_sin(double x)
{
    if (x > (2*PIE) || x < 0) //reducing to [0,2π]
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
    
    double sinx = 1;
    for (int i = 10; i > 0; i--)
    {
        sinx = 1 - ((x*x)/(2*i*(2*i+1)))*sinx;
    }
    return x*sinx*multiplier;
}
//v2: With Horner's Polynomial and only radian
double astral_cos(double x)
{
    if (x > (2*PIE) || x < 0) //reducing to [0,2π]
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

    double cosx = 1;
    for (int i = 10; i > 0; i--)
    {
        cosx = 1 - ((x*x)/(2*i*(2*i-1)))*cosx;
    }
    return multiplier*cosx;
}
//v1
double astral_tan(double x)
{
    if ((astral_cos(x) <= PRECISION) && (astral_cos(x) > -PRECISION))
    {return 703;}
    double tanx = astral_sin(x)/astral_cos(x);
    return tanx;
}
//v1
double astral_cot(double x)
{
    if ((astral_sin(x) <= PRECISION) && (astral_sin(x) > -PRECISION))
    {return 703;}
    double cotx = astral_cos(x)/astral_sin(x);
    return cotx;
}
//v1
double astral_sec(double x)
{
    if ((astral_cos(x) <= PRECISION) && (astral_cos(x) > -PRECISION))
    {return 703;}
    double secx = 1/astral_cos(x);
    return secx;
}
double astral_cosec(double x)
{
    if ((astral_sin(x) <= PRECISION) && (astral_sin(x) > -PRECISION))
    {return 703;}
    double cosecx = 1/astral_sin(x);
    return cosecx;
}
//v1:
double arch_tan(double x)
{
    double atan;
    if (x == 0) {return 0;}
    if (x < 0.5 && x > -0.5) {atan = 0;}
    else {atan = (x > 0) ? (PIE/2 - 0.1) : -(PIE/2 - 0.1);}
    double tan_val;
    int i = 0;
    do
    {
        i++;
        tan_val = astral_tan(atan);
        if (i > ITERATIONS) {return 701;}
        atan = atan - ((tan_val-x)/(1 + (tan_val*tan_val)));
    } while ((tan_val - x) > PRECISION || (x-tan_val) > PRECISION);
    return atan;
}

//v1: Machin's Formula
double pie()
{
    double pie = 4*(4*arch_tan(1.0/5) - arch_tan(1.0/239));
    return pie;
}