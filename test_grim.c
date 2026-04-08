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

    printf("\n--- The Inverse Sine & Cosine Suite ---\n");
    // Domain: [-1, 1]. Range: [-π/2, π/2] for arcsin, [0, π] for arccos
    printf("ArcSin-ArcCos test1, 0: arcsin(0) = %f || arccos(0) = %f\n", arch_sin(0), arch_cos(0));
    printf("ArcSin-ArcCos test2, 1 (Upper Bound): arcsin(1) = %f || arccos(1) = %f\n", arch_sin(1), arch_cos(1));
    printf("ArcSin-ArcCos test3, -1 (Lower Bound): arcsin(-1) = %f || arccos(-1) = %f\n", arch_sin(-1), arch_cos(-1));
    printf("ArcSin-ArcCos test4, 0.5 (pi/6 & pi/3): arcsin(0.5) = %f || arccos(0.5) = %f\n", arch_sin(0.5), arch_cos(0.5));
    printf("ArcSin-ArcCos test5, -0.866025 (-sqrt(3)/2): arcsin(-0.866025) = %f || arccos(-0.866025) = %f\n", arch_sin(-0.866025), arch_cos(-0.866025));

    printf("\n--- The Inverse Tangent & Cotangent Suite ---\n");
    // Domain: All real numbers. 
    printf("ArcTan-ArcCot test1, 0: arctan(0) = %f || arccot(0) = %f\n", arch_tan(0), arch_cot(0));
    printf("ArcTan-ArcCot test2, 1 (pi/4): arctan(1) = %f || arccot(1) = %f\n", arch_tan(1), arch_cot(1));
    printf("ArcTan-ArcCot test3, -1 (-pi/4 & 3pi/4): arctan(-1) = %f || arccot(-1) = %f\n", arch_tan(-1), arch_cot(-1));
    printf("ArcTan-ArcCot test4, 1.73205 (sqrt(3)): arctan(1.73205) = %f || arccot(1.73205) = %f\n", arch_tan(1.73205), arch_cot(1.73205));
    printf("ArcTan-ArcCot test5, 1000.0 (Approaching Infinity): arctan(1000.0) = %f || arccot(1000.0) = %f\n", arch_tan(1000.0), arch_cot(1000.0));

    printf("\n--- The Inverse Secant & Cosecant Suite ---\n");
    // Domain: x <= -1 or x >= 1. 
    printf("ArcSec-ArcCsc test1, 1 (Boundary): arcsec(1) = %f || arccsc(1) = %f\n", arch_sec(1), arch_cosec(1));
    printf("ArcSec-ArcCsc test2, -1 (Boundary): arcsec(-1) = %f || arccsc(-1) = %f\n", arch_sec(-1), arch_cosec(-1));
    printf("ArcSec-ArcCsc test3, 2 (pi/3 & pi/6): arcsec(2) = %f || arccsc(2) = %f\n", arch_sec(2), arch_cosec(2));
    printf("ArcSec-ArcCsc test4, -2 (2pi/3 & -pi/6): arcsec(-2) = %f || arccsc(-2) = %f\n", arch_sec(-2), arch_cosec(-2));
    printf("ArcSec-ArcCsc test5, 1.1547 (2/sqrt(3)): arcsec(1.1547) = %f || arccsc(1.1547) = %f\n\n", arch_sec(1.1547), arch_cosec(1.1547));
    printf("\n=== THE CHAOS PROTOCOL (STRESS TESTS) ===\n\n");

    // 1-4: The Domain Violations (Blatant Disregard for the Rules)
    // arcsin and arccos expect [-1, 1]. arcsec and arccsc expect |x| >= 1.
    printf("Chaos Test 1 (ArcSin Overload): arcsin(2.5) = %f\n", arch_sin(2.5));
    printf("Chaos Test 2 (ArcCos Underload): arccos(-10.0) = %f\n", arch_cos(-10.0));
    printf("Chaos Test 3 (ArcSec Deadzone): arcsec(0.5) = %f\n", arch_sec(0.5));
    printf("Chaos Test 4 (ArcCsc Singularity): arccsc(0.0) = %f\n", arch_cosec(0.0));

    // 5-8: The Edge Skimmers (Just barely crossing the boundaries)
    // These test if your engine tries to compute before checking the domain, 
    // or if floating-point inaccuracies push a valid number into invalid territory.
    printf("Chaos Test 5 (ArcCos Edge Skim): arccos(1.0000001) = %f\n", arch_cos(1.0000001));
    printf("Chaos Test 6 (ArcSin Edge Skim): arcsin(-1.0000001) = %f\n", arch_sin(-1.0000001));
    printf("Chaos Test 7 (ArcSec Edge Skim): arcsec(0.9999999) = %f\n", arch_sec(0.9999999));
    printf("Chaos Test 8 (ArcCsc Edge Skim): arccsc(-0.9999999) = %f\n", arch_cosec(-0.9999999));

    // 9-12: The Extremes (Microscopics and Leviathans)
    // Testing how the Taylor series and Newton-Raphson handle extreme float scaling.
    printf("Chaos Test 9 (ArcTan Leviathan): arctan(1.0e15) = %f\n", arch_tan(1.0e15));
    printf("Chaos Test 10 (ArcCot Negative Leviathan): arccot(-1.0e15) = %f\n", arch_cot(-1.0e15));
    printf("Chaos Test 11 (ArcSin Microscopic): arcsin(1.0e-15) = %f\n", arch_sin(1.0e-15));
    printf("Chaos Test 12 (ArcTan Microscopic): arctan(-1.0e-15) = %f\n", arch_tan(-1.0e-15));

    printf("\n=====================================\n");

    printf("\n--- Constants Forge ---\n");
    printf("Pie by Machin's formula: %.15f\n", sacred_pie());
    printf("Original Pie: 3.1415926535897932\n");

    printf("\n=====================================\n");
    return 0;
}