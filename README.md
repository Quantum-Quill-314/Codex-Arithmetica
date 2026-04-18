# Codex-Arithmatica

> *"To understand the universe, one must first learn to forge the constants that govern it."*

**Codex-Arithmatica** is a custom, bare-metal mathematical engine built entirely from scratch in C. Designed to bypass standard system libraries (like `<math.h>`), this library forces the hardware to evaluate advanced numerical methods, continuous calculus approximations, and combinatorics through rigorously optimized, ground-up algorithmic architecture. 

---

## 📜 The Grimoire's Contents (Project Scope)

### I. Continuous Approximations (The Core Engine)
* **Foundation Mechanics (`anchor`, `zenith`):** Custom implementations for floating-point floor extraction and integer exponentiation via iterative loops.
* **N-th Root (`origin_nroot`):** Implemented using the Newton-Raphson Method ($x_{k+1} = x_k - \frac{f(x_k)}{f'(x_k)}$) for rapid convergence to a predefined precision boundary.
* **Trigonometric Suite (`astral_sin`, `astral_cos`, etc.):** Base functions evaluated using Horner's Polynomial method for extreme computational efficiency, coupled with rigorous Modulo $2\pi$ Argument Reduction to map all reals to the $[0, \pi/2]$ domain. Derived functions feature custom division-by-zero intercepts.
* **Inverse Trigonometry (`arch_tan`, `arch_sin`, etc.):** Anchored by a highly volatile Newton-Raphson loop for `arch_tan`. The rest of the suite is dynamically calculated via geometric right-triangle identities and complementary angle translations, fortified by strict domain limit guards.
* **Logarithms & Exponentials (`eon_growth`, `eon_log`):** Evaluated via Taylor Series Expansions for $e^x$ and Halley’s Method (Cubic Convergence) for $\ln(x)$. Features base-shifting for arbitrary logarithms and exponential growths.

### II. The Universal Constants Forge
* **$\pi$ Engine (`sacred_pie`):** Evaluated using Machin’s Formula ($\frac{\pi}{4} = 4\arctan(\frac{1}{5}) - \arctan(\frac{1}{239})$). 
* **Euler’s Number ($e$):** Evaluated using Euler's Continued Fraction (The Infinite Staircase) via deep recursive structures (`fractional_e`).
* **Euler-Mascheroni Constant ($\gamma$):** Calculated via the limit of the Harmonic series scaled against the continuous logarithmic curve with Bernoulli error corrections (`eon_remnant`).

### III. Combinatoric & Algebraic Foundations
* **The Factorial Engine (`stellar_factorial`):** Utilizes rapid iterative loops for exact positive integers up to $12!$.
* **Massive Combinatorics (`abyssal_factorial`):** Calculates factorials in continuous log-space using Stirling’s Approximation. Injects targeted Bernoulli error terms to guarantee massive precision while bypassing the 64-bit memory ceiling. 

### IV. [PENDING] General Equation Solver & Calculus Engine
* **Calculus Suite:** Central Finite Difference for $O(h^2)$ differentiation, Simpson’s 1/3 Rule for integration, and RK4 for Ordinary Differential Equations.
* **Special Functions:** The Gamma Function, Beta Function, and Riemann Zeta Function.

---

## 🔮 Syntax of the Spells (Function Arguments & Usage)

To utilize the Codex, include the Grimoire header (`#include "grimoire.h"`) in your C file. 

### 1. Foundation & Roots
* `int anchor(double x);` (Mathematical Floor)
* `double zenith(int n, double x);` ($x^n$ via rapid squaring)
* `double origin_nroot(int n, double x);` ($\sqrt[n]{x}$)

### 2. The Combinatoric Engine
* `double stellar_factorial(int x);`
  * **x:** A positive integer up to $12$. Returns exact discrete factorials.
* `double abyssal_factorial(long int x);`
  * **x:** A massive positive integer.
  * **Returns:** The natural logarithm of the factorial, $\ln(x!)$, operating entirely in log-space to prevent buffer overflows during massive permutations and combinations.

### 3. Exponentials & Logarithms
* `double eon_growth(double x);` ($e^x$)
* `double eon_log(double x);` ($\ln(x)$)
* `double log_base(double x, double b);` ($\log_b(x)$)
* `double base_growth(double x, double b);` ($b^x$)

### 4. Trigonometry & Inverse Trigonometry
* `double astral_sin(double x);` | `double astral_cos(double x);` | `double astral_tan(double x);`
* `double arch_sin(double x);` | `double arch_cos(double x);` | `double arch_tan(double x);`
*(Full suite of 6 standard and 6 inverse functions available. Trigonometric inputs expect radians. Inverse outputs return principal angles in radians).*

### 5. Constants Forge
* `double sacred_pie();` ($\pi$)
* `double fractional_e(int k);` (Seed with $k=1$ to calculate Euler's structural fractions)
* `double eon_remnant(int l);` (Euler-Mascheroni Constant $\gamma$)

---

## ⚙️ The Silent Alarm (Global Error State)

**CRITICAL ARCHITECTURE:** To preserve the ability to chain equations (e.g., `astral_sin(eon_log(x))`) without "In-Band Signaling" collisions, the Grimoire utilizes a Global Error State (The Silent Alarm). 

Every function features a pre-emptive **Guardian Check**. If an inner calculation fails, the engine safely returns a harmless ghost value of `0.0` and strikes the global alarm, cascading the shutdown outward to prevent fatal hardware CPU crashes (like division-by-zero or infinite loops).

To check for computational paradoxes, users must verify the crystal after heavy operations: `extern int GRIMOIRE_ERROR;`

* **`0` (Absolute Peace):** The calculation was mathematically successful.
* **`701` (Iterator Error):** The maximum algorithmic loops (`ITERATIONS`) were reached without achieving `PRECISION`. Often triggered by asymptotic limits.
* **`702` (Domain Error):** The input violates geometric boundaries (e.g., attempting $\arcsin(2.5)$ or $\ln(-5)$).
* **`703` (Division by Zero):** The continuous approximation attempted to divide by a microscopic float that the engine resolved to zero. Intercepted at vertical asymptotes like $\tan(\pi/2)$.

---
**Architect:** [Quantum Quill]  
**Status:** In Active Development