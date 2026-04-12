#define PRECISION 1.0e-8
#define ITERATIONS 1.0e5

//constants forge
double sacred_pie();
double fractional_e(int k);

#define PIE 3.14159265358979323846
#define EULER (2 + (1.0/fractional_e(1)))

double origin_nroot(int n, double x); //V1: int n
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
double arch_cot(double x);
double arch_sin(double x);
double arch_cos(double x);
double arch_sec(double x);
double arch_cosec(double x);

//powers suite
double zenith(int n, double x); //v1: for loop
double eon_growth(double x);