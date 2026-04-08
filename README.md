# Codex-Arithmetica

> *"To understand the universe, one must first learn to forge the constants that govern it."*

**Codex-Arithmetica** is a custom, bare-metal mathematical engine built entirely from scratch in C. Designed to bypass standard system libraries (like `<math.h>`), this library forces the hardware to evaluate advanced numerical methods, continuous calculus approximations, and combinatorics through rigorously optimized, ground-up algorithmic architecture. 

---

## 📜 The Grimoire's Contents (Project Scope)

### I. Continuous Approximations (The Core Engine)
* **Foundation Mechanics (`anchor`, `zenith`):** Custom implementations for floating-point floor extraction and integer exponentiation via iterative loops.
* **N-th Root (`origin_nroot`):** Implemented using the Newton-Raphson Method ($x_{k+1} = x_k - \frac{f(x_k)}{f'(x_k)}$) for rapid convergence to a predefined precision boundary.
* **Trigonometric Suite (`astral_sin`, `astral_cos`, etc.):** Base functions evaluated using Horner's Polynomial method for extreme computational efficiency, coupled with rigorous Modulo $2\pi$ Argument Reduction to map all reals to the $[0, \pi/2]$ domain. Derived functions feature custom division-by-zero intercepts.
* **Inverse Trigonometry (`arch_tan`, `arch_sin`, etc.):** Anchored by a highly volatile Newton-Raphson loop for `arch_tan`. The rest of the suite is dynamically calculated via geometric right-triangle identities and complementary angle translations, fortified by strict domain limit guards (e.g., rejecting $|x| > 1$ for arcsin).
* **[IN PROGRESS] Logarithms & Exponentials:** To be evaluated via Taylor Series Expansions for $e^x$ and Halley’s Method (Cubic Convergence) for $\ln(x)$.

### II. The Universal Constants Forge
* **$\pi$ Engine (`sacred_pie`):** Evaluated using Machin’s Formula ($\frac{\pi}{4} = 4\arctan(\frac{1}{5}) - \arctan(\frac{1}{239})$). Dynamically relies on the precision of the custom `arch_tan` function to map $\pi$ flawlessly.
* **[PENDING] Euler’s Number ($e$):** To be evaluated using Euler's Continued Fraction (The Infinite Staircase) via deep recursive structures.
* **[PENDING] Euler-Mascheroni Constant ($\gamma$):** To be calculated via the limit of the Harmonic series.

### III. Combinatoric & Algebraic Foundations
* **The Factorial Engine (`stellar_factorial`):** Currently utilizes iterative loops for positive integers. 
* **[PENDING] Massive Combinatorics:** Integration of Stirling’s Approximation for catastrophic memory overflow prevention, and optimized ${}^nP_r$ / ${}^nC_r$ calculators.

### IV. [PENDING] General Equation Solver & Calculus Engine
* **Bisection Root Finding:** Interval Halving for arbitrary continuous functions.
* **Calculus Suite:** Central Finite Difference for $O(h^2)$ differentiation, Simpson’s 1/3 Rule for integration, and RK4 for Ordinary Differential Equations.
* **Special Functions:** The Gamma Function, Beta Function, and Riemann Zeta Function.

---

## 🔮 Syntax of the Spells (Function Arguments & Usage)

To utilize the Codex, include the Grimoire header (`#include "grimoire.h"`) in your C file. Below are the exact argument structures required to invoke the engines:

### 1. Foundation & Roots
* `int anchor(double x);`
  * **x:** Any floating-point number.
  * **Returns:** The mathematical floor of the input as an integer.
* `double zenith(int n, double x);`
  * **n:** The integer exponent (currently supports positive integers).
  * **x:** The base floating-point number.
  * **Returns:** The value of $x^n$.
* `double origin_nroot(int n, double x);`
  * **n:** The integer root to be extracted (e.g., 2 for square root, 3 for cube root).
  * **x:** The base floating-point number.
  * **Returns:** The n-th root of $x$ calculated via Newton-Raphson.

### 2. The Combinatoric Engine
* `double stellar_factorial(int x);`
  * **x:** A positive integer ($x \geq 0$).
  * **Returns:** The factorial of $x$. Returns `702.0` if passed a negative integer.

### 3. The Trigonometric Suite
* `double astral_sin(double x);` | `double astral_cos(double x);` | `double astral_tan(double x);`
* `double astral_cot(double x);` | `double astral_sec(double x);` | `double astral_cosec(double x);`
  * **x:** The angle measured in **radians**.
  * **Returns:** The corresponding trigonometric ratio. Tan, Cot, Sec, and Csc will return `703.0` if their geometric asymptotes are breached.

### 4. The Inverse Trigonometric Suite
* `double arch_sin(double x);` | `double arch_cos(double x);`
  * **x:** A ratio within the domain $[-1, 1]$. Returns `702.0` if domain is violated.
* `double arch_tan(double x);` | `double arch_cot(double x);`
  * **x:** Any real number ratio.
* `double arch_sec(double x);` | `double arch_cosec(double x);`
  * **x:** A ratio within the domain $|x| \geq 1$. Returns `702.0` if the domain is violated.
  * **Returns:** The principal angle in **radians** for all inverse functions.

### 5. Constants Forge
* `double sacred_pie();`
  * **Arguments:** None.
  * **Returns:** The constant $\pi$ dynamically calculated via Machin's Formula.

---

## ⚙️ Logs of Broken Quests (Error Codes)

Rather than utilizing standard system `NaN` or crashing the stack, the Grimoire safely intercepts mathematical paradoxes and returns distinct, identifying floating-point signatures:

* **`701.000000` (Iterator Error):** The maximum number of algorithmic loops (`ITERATIONS`) was reached without achieving the required `PRECISION`. Often triggered by infinite asymptotes or extreme limits in Newton-Raphson solvers.
* **`702.000000` (Domain Error):** The input violates the fundamental geometric boundaries of the function (e.g., attempting to find the inverse sine of $2.5$, or a factorial of a negative integer).
* **`703.000000` (Division by Zero):** The continuous approximation attempted to divide by a microscopic float that the engine resolved to zero. Commonly intercepted at the vertical asymptotes of Tangent, Secant, and Cosecant waves.

---
**Architect:** Quill Master  
**Status:** In Active Development