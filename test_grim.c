#include <stdio.h>
#include "grimoire.h"

int main() {
    printf("=== CODEX-ARITHMETICA DIAGNOSTICS ===\n\n");

    printf("--- Continuous Approximations ---\n");
    printf("Root Test: Sqrt(25) = %f\n", origin_nroot(2, 25.0));

    printf("\n--- Combinatoric Engine ---\n");
    printf("Factorial Test: 5! = %f\n", stellar_factorial(5));
    printf("Edge Case Test: 0! and 1!: 0! = %f || 1! = %f\n", stellar_factorial(0), stellar_factorial(1));

    printf("\n=====================================\n");
    return 0;
}