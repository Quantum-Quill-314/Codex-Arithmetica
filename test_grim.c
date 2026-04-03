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
    printf("Root Test: Sqrt(25) = %f\n", origin_nroot(2, 25.0));

    printf("\n--- Combinatoric Engine ---\n");
    printf("Factorial Test: 5! = %f\n", stellar_factorial(5));
    printf("Edge Case Test: 0! and 1!: 0! = %f || 1! = %f\n", stellar_factorial(0), stellar_factorial(1));

    printf("\n=====================================\n");
    return 0;
}