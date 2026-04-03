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
    printf("Sin-Cos test5, 7.85398: sin(7.85398) = %f || cos(7.85398) = %f\n\n", astral_sin(7.85398),astral_cos(7.85398));


    printf("\n=====================================\n");
    return 0;
}