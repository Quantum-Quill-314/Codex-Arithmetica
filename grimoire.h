#define PRECISION 1.0e-8
#define ITERATIONS 1.0e5
#define PIE 3.14159265358979323846


double origin_nroot(int n, double x); //V1: int n
double zenith(int n, double x); //v1: for loop
double stellar_factorial(int x); //v1: only positive integers
int anchor(double x); //v1:

//Trig Suite
double astral_sin(double x);
double astral_cos(double x);
double astral_tan(double x);
double astral_cot(double x);
double astral_sec(double x);
double astral_cosec(double x);

//Inverse Trig Suite (principal angles)
double arch_tan(double x);

//constants forge
double pie();
