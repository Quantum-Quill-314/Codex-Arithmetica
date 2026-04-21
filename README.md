# Codex-Arithmatica

> *"To understand the universe, one must first learn to forge the constants that govern it. Here, we do not merely study the mathematics; we inhabit them."*

**Codex-Arithmatica** is a custom, bare-metal mathematical engine built entirely from scratch in C. Designed to bypass standard system libraries (like `<math.h>`), this library forces the hardware to evaluate advanced numerical methods, continuous calculus approximations, and combinatorics through rigorously optimized, ground-up algorithmic architecture. It is an exercise in both computational dominance and calculated romanticism.

---

## 📜 The Grimoire's Contents (Project Scope)

### I. Continuous Approximations (The Core Engine)
* **Foundation Mechanics (`anchor`, `zenith`):** Custom implementations for floating-point floor extraction and integer exponentiation via rapid-squaring iterative loops.
* **N-th Root (`origin_nroot`):** Implemented using the Newton-Raphson Method for rapid convergence to a predefined precision boundary:
  $$x_{k+1} = x_k - \frac{f(x_k)}{f'(x_k)}$$
* **Trigonometric Suite (`astral_sin`, `astral_cos`, etc.):** Base functions evaluated using Horner's Polynomial method for extreme computational efficiency, coupled with rigorous Modulo 2π argument reduction to map all reals to the `[0, π/2]` domain. Derived functions feature custom division-by-zero intercepts.
* **Inverse Trigonometry (`arch_tan`, `arch_sin`, etc.):** Anchored by a highly volatile Newton-Raphson loop for `arch_tan`. The rest of the suite is dynamically calculated via geometric right-triangle identities and complementary angle translations, fortified by strict domain limit guards.
* **Logarithms & Exponentials (`eon_growth`, `eon_log`, `log_base`, `base_growth`):** Evaluated via Taylor Series Expansions for `e^x` and Halley’s Method (Cubic Convergence) for `ln(x)`. Features a highly optimized "Paranoia Gate" and Taylor Series Shadow Update to update exponential weights instantly without recalculating the heavy series from scratch.

### II. Combinatoric & Algebraic Foundations
* **The Discrete Engine (`stellar_factorial`, `stellar_combinations`, `stellar_permutations`):** Utilizes rapid iterative loops and simultaneous multiply/divide weaves to calculate exact positive integers, safeguarded against early 64-bit memory ceilings.
* **The Abyssal Engine (`abyssal_factorial`, `abyssal_combinations`, `abyssal_permutations`):** Calculates factorials and massive arrangements in continuous log-space using Stirling’s Approximation. Injects targeted Bernoulli error terms to guarantee immense precision, allowing the engine to calculate Leviathans (like 10000C5000) while entirely bypassing standard hardware crash limits.

### III. The Universal Constants Forge
* **π Engine (`sacred_pie`):** Evaluated using Machin’s Formula:
  $$\frac{\pi}{4} = 4 \arctan\left(\frac{1}{5}\right) - \arctan\left(\frac{1}{239}\right)$$
* **Euler’s Number (e):** Evaluated using Euler's Continued Fraction (The Infinite Staircase) via deep recursive structures (`fractional_e`).
* **Euler-Mascheroni Constant (γ):** Calculated via the limit of the Harmonic series scaled against the continuous logarithmic curve with read-only memory (`static const`) Bernoulli error corrections (`eon_remnant`).

---

## 🔮 Syntax of the Spells (Function Arguments & Usage)

To utilize the Codex, include the Grimoire header (`#include "grimoire.h"`) in your C environment. 

### 1. Foundation & Roots
* `int anchor(double x);` *(Mathematical Floor)*
* `double zenith(int n, double x);` *(Calculates `x^n` via rapid squaring)*
* `double origin_nroot(int n, double x);` *(Calculates the n-th root of x)*

### 2. Exponentials & Logarithms
* `double eon_growth(double x);` *(Calculates `e^x`)*
* `double eon_log(double x);` *(Calculates `ln(x)`)*
* `double log_base(double x, double b);` *(Calculates `log_b(x)`)*
* `double base_growth(double x, double b);` *(Calculates `b^x`)*

### 3. The Combinatoric Engine
* `double stellar_factorial(int x);`
* `unsigned long long int stellar_combinations(int n, int r);`
* `unsigned long long int stellar_permutations(int n, int r);`
  * **x, n, r:** Positive integers bounded by strict geometric limits to prevent integer overflow. Returns exact discrete values.
* `double abyssal_factorial(long int x);`
* `double abyssal_combinations(long int n, long int r);`
* `double abyssal_permutations(long int n, long int r);`
  * **Returns:** The natural logarithm of the factorial/arrangement (`ln(n!)` or `ln(nCr)`), mapping infinite complexities into safely manageable continuous floats.

### 4. Trigonometry & Inverse Trigonometry
* `double astral_sin(double x);` | `double astral_cos(double x);` | `double astral_tan(double x);`
* `double arch_sin(double x);` | `double arch_cos(double x);` | `double arch_tan(double x);`
*(Full suite of 6 standard and 6 inverse functions available. Trigonometric inputs expect radians. Inverse outputs return principal angles in radians).*

### 5. Constants Forge
* `double sacred_pie();` *(Returns π)*
* `double fractional_e(int k);` *(Seed with `k=1` to calculate Euler's structural fractions)*
* `double eon_remnant(int l);` *(Returns Euler-Mascheroni Constant γ)*

---

## ⚙️ The Silent Alarm (Global Error State)

**CRITICAL ARCHITECTURE:** To preserve the ability to chain continuous equations (e.g., `astral_sin(eon_log(x))`) without hardware collisions, the Grimoire utilizes a Global Error State (The Silent Alarm). 

Every function features a pre-emptive **Guardian Check**. If an inner calculation violates mathematical reality, the engine safely returns a harmless ghost value of `0.0` and strikes the global alarm, cascading a shutdown outward to prevent fatal hardware CPU crashes.

To check for computational paradoxes, verify the crystal after heavy operations: `extern int GRIMOIRE_ERROR;`

* **`0` (Absolute Peace):** The calculation was mathematically successful.
* **`701` (Iterator Error):** The maximum algorithmic loops (`ITERATIONS`) were reached without achieving `PRECISION`. Often triggered by infinite asymptotic limits.
* **`702` (Domain Error):** The input violates geometric boundaries (e.g., attempting arcsin(2.5) or ln(-5)).
* **`703` (Division by Zero):** The continuous approximation attempted to divide by a microscopic float that the engine resolved to zero. Intercepted at vertical asymptotes like tan(π/2).
* **`704` (Memory Overload Prediction):** The input value will cause a physical integer memory overload further in the calculation. The function intercepts it before the CPU is crushed. Use the Abyssal (log-space) functions for these calculations instead.

---

## 🌌 Future Scope (The Uncharted Abyss)

While Version One of the Grimoire has successfully mapped the foundational geometries and combinatoric depths, the true architecture of the continuous void awaits. Future expansions of the Codex-Arithmatica will encompass:

* **The Calculus Suite:** Direct, bare-metal implementations of Central Finite Difference for `O(h²)` differentiation, Simpson’s 1/3 Rule for numeric integration, and 4th-Order Runge-Kutta (RK4) methods for Ordinary Differential Equations.
* **The Special Functions:** Charting the ancient phantoms of the continuous plane, including the Gamma Function `Γ(z)`, Beta Function `B(x,y)`, and the Riemann Zeta Function `ζ(s)`.

**Architect:** [Quantum Quill]  
**Status:** Version 1: Basic Maths Complete!✅☑️