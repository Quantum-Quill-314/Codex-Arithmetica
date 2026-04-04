#include <stdio.h>
#include "grimoire.h"

int main() {
    printf("=== CODEX-ARITHMETICA DIAGNOSTICS ===\n\n");
    
    printf("Floor Test1: floor(5): %d\n", anchor(5.0));
    printf("Floor Test2: floor(5.689): %d\n", anchor(5.689));
    printf("Floor Test3: floor(0): %d\n", anchor(0));
    printf("Floor Test4: floor(-3): %d\n", anchor(-3));
    printf("Floor Test5: floor(-3.141): %d\n\n", anchor(-3.141));

    printf("--- Continuous Approximations ---\n");
    printf("Root Test: Sqrt(25) = %f\n\n", origin_nroot(2, 25.0));

    printf("\n--- Combinatoric Engine ---\n");
    printf("Factorial Test: 5! = %f\n", stellar_factorial(5));
    printf("Edge Case Test: 0! and 1!: 0! = %f || 1! = %f\n\n", stellar_factorial(0), stellar_factorial(1));

    printf("\n--- Trigonometric Suite ---\n");
    printf("Sin-Cos test1, 0: sin(0) = %f || cos(0) = %f\n", astral_sin(0),astral_cos(0));
    printf("Sin-Cos test2, π/2: sin(1.57080) = %f || cos(1.57080) = %f\n", astral_sin(1.57080),astral_cos(1.57080));
    printf("Sin-Cos test3, -π/3: sin(-1.04720) = %f || cos(-1.04720) = %f\n", astral_sin(-1.04720),astral_cos(-1.04720));
    printf("Sin-Cos test4, π: sin(3.14159) = %f || cos(3.14159) = %f\n", astral_sin(3.14159),astral_cos(3.14159));
    printf("Sin-Cos test5, 7.85398: sin(7.85398) = %f || cos(7.85398) = %f\n", astral_sin(7.85398),astral_cos(7.85398));
    printf("Sin-Cos test6, 12.3325: sin(12.3325) = %f || cos(12.3325) = %f\n", astral_sin(12.3325),astral_cos(12.3325));
    printf("Sin-Cos test7, -6.666: sin(-6.666) = %f || cos(-6.666) = %f\n\n", astral_sin(-6.666),astral_cos(-6.666));

    printf("\n--- The Tangent & Cotangent Suite ---\n");
    printf("Tan-Cot test1, 0: tan(0) = %f || cot(0) = %f\n", astral_tan(0), astral_cot(0));
    printf("Tan-Cot test2, π/2: tan(1.57080) = %f || cot(1.57080) = %f\n", astral_tan(1.57080), astral_cot(1.57080));
    printf("Tan-Cot test3, -π/3: tan(-1.04720) = %f || cot(-1.04720) = %f\n", astral_tan(-1.04720), astral_cot(-1.04720));
    printf("Tan-Cot test4, π: tan(3.14159) = %f || cot(3.14159) = %f\n", astral_tan(3.14159), astral_cot(3.14159));
    printf("Tan-Cot test5, 7.85398: tan(7.85398) = %f || cot(7.85398) = %f\n", astral_tan(7.85398), astral_cot(7.85398));

    printf("\n--- The Secant & Cosecant Suite ---\n");
    printf("Sec-Csc test1, 0: sec(0) = %f || cosec(0) = %f\n", astral_sec(0), astral_cosec(0));
    printf("Sec-Csc test2, π/2: sec(1.57080) = %f || cosec(1.57080) = %f\n", astral_sec(1.57080), astral_cosec(1.57080));
    printf("Sec-Csc test3, -π/3: sec(-1.04720) = %f || cosec(-1.04720) = %f\n", astral_sec(-1.04720), astral_cosec(-1.04720));
    printf("Sec-Csc test4, π: sec(3.14159) = %f || cosec(3.14159) = %f\n", astral_sec(3.14159), astral_cosec(3.14159));
    printf("Sec-Csc test5, 7.85398: sec(7.85398) = %f || cosec(7.85398) = %f\n\n", astral_sec(7.85398), astral_cosec(7.85398));


    printf("\n=====================================\n");
    return 0;
}