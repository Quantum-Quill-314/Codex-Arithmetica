#include <stdio.h>
#include "grimoire.h"

void assess_engine(const char* label, double result, int is_int) {
    if (GRIMOIRE_ERROR != 0) {
        // The engine failed! Print the dummy 0 and the exact error code.
        if (is_int) {
            printf("%s = 0", label);
        } else {
            printf("%s = 0.000000", label);
        }
        
        if (GRIMOIRE_ERROR == 701) {
            printf("  [ERROR: Max iterations reached, without precision]\n");
        } else if (GRIMOIRE_ERROR == 702) {
            printf("  [ERROR: Domain error]\n");
        } else if (GRIMOIRE_ERROR == 703) {
            printf("  [ERROR: Div by 0 error]\n");
        } else {
            printf("  [ERROR: Unknown Anomaly %d]\n", GRIMOIRE_ERROR);
        }
        
        // Reset the crystal for the next test!
        GRIMOIRE_ERROR = 0; 
    } else {
        // The engine succeeded! Print the pure math.
        if (is_int) {
            printf("%s = %d\n", label, (int)result);
        } else {
            printf("%s = %.10f\n", label, result);
        }
    }
}

// Macros to keep the test calls elegant and single-line
#define TEST_FLT(label, expression) do { GRIMOIRE_ERROR = 0; double res = (expression); assess_engine(label, res, 0); } while(0)
#define TEST_INT(label, expression) do { GRIMOIRE_ERROR = 0; double res = (double)(expression); assess_engine(label, res, 1); } while(0)


int main() {
    printf("=== CODEX-ARITHMETICA DIAGNOSTICS ===\n\n");
    
    TEST_INT("Floor Test1: floor(5)", anchor(5.0));
    TEST_INT("Floor Test2: floor(5.689)", anchor(5.689));
    TEST_INT("Floor Test3: floor(0)", anchor(0));
    TEST_INT("Floor Test4: floor(-3)", anchor(-3));
    TEST_INT("Floor Test5: floor(-3.141)", anchor(-3.141));

    printf("\n--- Continuous Approximations ---\n");
    TEST_FLT("Root Test: Sqrt(25)", origin_nroot(2, 25.0));

    printf("\n--- Combinatoric Engine ---\n");
    TEST_FLT("Factorial Test1: 5!", stellar_factorial(5));
    TEST_FLT("Factorial Test2: 0!", stellar_factorial(0));
    TEST_FLT("Factorial Test3: 1!", stellar_factorial(1));

    TEST_FLT("Log Factorial Test1: ln(0!)", abyssal_factorial(0));
    TEST_FLT("Log Factorial Test2: ln(-5!)", abyssal_factorial(-5));
    TEST_FLT("Log Factorial Test3: ln(12!)", abyssal_factorial(12));
    TEST_FLT("Log Factorial Test4: ln(13!)", abyssal_factorial(13));
    TEST_FLT("Log Factorial Test5: ln(100!)", abyssal_factorial(100));

    printf("\n--- Trigonometric Suite ---\n");
    TEST_FLT("Sin test1 (0)", astral_sin(0));
    TEST_FLT("Cos test1 (0)", astral_cos(0));
    TEST_FLT("Sin test2 (π/2)", astral_sin(1.57080));
    TEST_FLT("Cos test2 (π/2)", astral_cos(1.57080));
    TEST_FLT("Sin test3 (-π/3)", astral_sin(-1.04720));
    TEST_FLT("Cos test3 (-π/3)", astral_cos(-1.04720));
    TEST_FLT("Sin test4 (π)", astral_sin(3.14159));
    TEST_FLT("Cos test4 (π)", astral_cos(3.14159));
    TEST_FLT("Sin test5 (7.85398)", astral_sin(7.85398));
    TEST_FLT("Cos test5 (7.85398)", astral_cos(7.85398));
    TEST_FLT("Sin test6 (12.3325)", astral_sin(12.3325));
    TEST_FLT("Cos test6 (12.3325)", astral_cos(12.3325));
    TEST_FLT("Sin test7 (-6.666)", astral_sin(-6.666));
    TEST_FLT("Cos test7 (-6.666)", astral_cos(-6.666));

    printf("\n--- The Tangent & Cotangent Suite ---\n");
    TEST_FLT("Tan test1 (0)", astral_tan(0));
    TEST_FLT("Cot test1 (0)", astral_cot(0));
    TEST_FLT("Tan test2 (π/2)", astral_tan(1.57080));
    TEST_FLT("Cot test2 (π/2)", astral_cot(1.57080));
    TEST_FLT("Tan test3 (-π/3)", astral_tan(-1.04720));
    TEST_FLT("Cot test3 (-π/3)", astral_cot(-1.04720));
    TEST_FLT("Tan test4 (π)", astral_tan(3.14159));
    TEST_FLT("Cot test4 (π)", astral_cot(3.14159));

    printf("\n--- The Secant & Cosecant Suite ---\n");
    TEST_FLT("Sec test1 (0)", astral_sec(0));
    TEST_FLT("Csc test1 (0)", astral_cosec(0));
    TEST_FLT("Sec test2 (π/2)", astral_sec(1.57080));
    TEST_FLT("Csc test2 (π/2)", astral_cosec(1.57080));
    TEST_FLT("Sec test3 (-π/3)", astral_sec(-1.04720));
    TEST_FLT("Csc test3 (-π/3)", astral_cosec(-1.04720));
    TEST_FLT("Sec test4 (π)", astral_sec(3.14159));
    TEST_FLT("Csc test4 (π)", astral_cosec(3.14159));

    printf("\n--- The Inverse Sine & Cosine Suite ---\n");
    TEST_FLT("ArcSin test1 (0)", arch_sin(0));
    TEST_FLT("ArcCos test1 (0)", arch_cos(0));
    TEST_FLT("ArcSin test2 (1)", arch_sin(1));
    TEST_FLT("ArcCos test2 (1)", arch_cos(1));
    TEST_FLT("ArcSin test3 (-1)", arch_sin(-1));
    TEST_FLT("ArcCos test3 (-1)", arch_cos(-1));
    TEST_FLT("ArcSin test4 (0.5)", arch_sin(0.5));
    TEST_FLT("ArcCos test4 (0.5)", arch_cos(0.5));

    printf("\n--- The Inverse Tangent & Cotangent Suite ---\n");
    TEST_FLT("ArcTan test1 (0)", arch_tan(0));
    TEST_FLT("ArcCot test1 (0)", arch_cot(0));
    TEST_FLT("ArcTan test2 (1)", arch_tan(1));
    TEST_FLT("ArcCot test2 (1)", arch_cot(1));
    TEST_FLT("ArcTan test3 (-1)", arch_tan(-1));
    TEST_FLT("ArcCot test3 (-1)", arch_cot(-1));
    TEST_FLT("ArcTan test4 (1000.0)", arch_tan(1000.0));
    TEST_FLT("ArcCot test4 (1000.0)", arch_cot(1000.0));

    printf("\n--- The Inverse Secant & Cosecant Suite ---\n");
    TEST_FLT("ArcSec test1 (1)", arch_sec(1));
    TEST_FLT("ArcCsc test1 (1)", arch_cosec(1));
    TEST_FLT("ArcSec test2 (-1)", arch_sec(-1));
    TEST_FLT("ArcCsc test2 (-1)", arch_cosec(-1));
    TEST_FLT("ArcSec test3 (2)", arch_sec(2));
    TEST_FLT("ArcCsc test3 (2)", arch_cosec(2));

    printf("\n=== THE CHAOS PROTOCOL (STRESS TESTS) ===\n\n");
    TEST_FLT("Chaos Test 1 (ArcSin Overload: 2.5)", arch_sin(2.5));
    TEST_FLT("Chaos Test 2 (ArcCos Underload: -10.0)", arch_cos(-10.0));
    TEST_FLT("Chaos Test 3 (ArcSec Deadzone: 0.5)", arch_sec(0.5));
    TEST_FLT("Chaos Test 4 (ArcCsc Singularity: 0.0)", arch_cosec(0.0));
    TEST_FLT("Chaos Test 5 (ArcCos Edge Skim: 1.0000001)", arch_cos(1.0000001));
    TEST_FLT("Chaos Test 6 (ArcSin Edge Skim: -1.0000001)", arch_sin(-1.0000001));
    TEST_FLT("Chaos Test 7 (ArcTan Leviathan: 1.0e15)", arch_tan(1.0e15));

    printf("\n--- Exponential Test ---\n");
    TEST_FLT("Exp Test1 (0)", eon_growth(0));
    TEST_FLT("Exp Test2 (1)", eon_growth(1));
    TEST_FLT("Exp Test3 (-1)", eon_growth(-1));
    TEST_FLT("Exp Test4 (2.5)", eon_growth(2.5));

    printf("\n--- Logarithm Test ---\n");
    TEST_FLT("Ln test1 (0)", eon_log(0));
    TEST_FLT("Ln test2 (2.71828)", eon_log(2.71828));
    TEST_FLT("Ln test3 (10^6)", eon_log(1.0e6));
    TEST_FLT("Ln test4 (-13)", eon_log(-13));

    printf("\n--- Base Growth Test ---\n");
    TEST_FLT("a^b test1 (2^3)", base_growth(3,2));
    TEST_FLT("a^b test2 (4^0.5)", base_growth(0.5, 4));
    TEST_FLT("a^b test3 (-2^-3)", base_growth(-3,-2));
    TEST_FLT("a^b test4 (0^0)", base_growth(0,0));
    TEST_FLT("a^b test5 (-5^0)", base_growth(0,-5));
    TEST_FLT("a^b test6 (-4^0.5)", base_growth(0.5,-4));

    printf("\n--- Constants Forge ---\n");
    TEST_FLT("Pie by Machin's formula", sacred_pie());
    printf("  -> Original Pie: 3.141592653589793\n");
    
    TEST_FLT("e by me", (2 + 1.0/fractional_e(1))); 
    printf("  -> Original e  : 2.718281828459045\n");
    
    TEST_FLT("Gamma (Euler's constant) by me", eon_remnant(50));
    printf("  -> Original Gam: 0.577215664901532\n");

    printf("\n=====================================\n");
    return 0;
}