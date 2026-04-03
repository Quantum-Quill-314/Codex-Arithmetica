# Codex-Arithmetica

> *"To understand the universe, one must first learn to forge the constants that govern it."*

**Codex-Arithmetica** is a custom, bare-metal mathematical engine built entirely from scratch in C. Designed to bypass standard system libraries (like `<math.h>`), this library forces the hardware to evaluate advanced numerical methods, continuous calculus approximations, and combinatorics through rigorously optimized, ground-up algorithmic architecture. 

---

## 📜 The Grimoire's Contents (Project Scope)

### I. Continuous Approximations (The Core Engine)
* **N-th Root ($\sqrt[n]{x}$):** Implemented using the Newton-Raphson Method ($x_{k+1} = x_k - \frac{f(x_k)}{f'(x_k)}$) for rapid convergence.
* **Trigonometric Suite ($\sin, \cos, \tan, \csc, \sec, \cot$):** Built upon Maclaurin/Taylor Series Expansions for base functions ($\sin, \cos$), coupled with Modulo $2\pi$ Argument Reduction. Derived functions include strict vertical asymptote error-handling to prevent division by zero.
* **Inverse Trigonometry ($\arcsin, \arccos, \arctan$):** Calculated via an internal Newton-Raphson dependency (e.g., solving $\tan(y) - x = 0$ for $y$). This completely bypasses the slow convergence of inverse Taylor series at domain boundaries.
* **Logarithms ($\ln(x)$) & Exponentials ($a^x$):** Exponentials evaluated via Taylor Series Expansions; Logarithms evaluated using the inverted Newton-Raphson Method (or Halley’s Method) for high-precision root finding.

### II. The Universal Constants Forge
* **$\pi$ Engine:** Evaluated using Machin’s Formula ($\frac{\pi}{4} = 4\arctan(\frac{1}{5}) - \arctan(\frac{1}{239})$). This dynamically relies on the precision of the previously built $\arctan(x)$ function to achieve blazing-fast convergence.
* **Euler’s Number ($e$):** Evaluated using Euler's Continued Fraction (The Infinite Staircase). Implemented via a deep recursive function to map the cascading fractional denominators.
* **Euler-Mascheroni Constant ($\gamma$):** Calculated via the limit of the Harmonic series subtracted by the Natural Logarithm.

### III. Combinatoric & Algebraic Foundations
* **Integer Exponentiation ($x^n$):** Implemented via Exponentiation by Squaring, reducing standard $O(n)$ time complexity to $O(\log n)$.
* **The Factorial Engine ($n!$):** Utilizes iterative loops for standard integers, seamlessly switching to Stirling’s Approximation ($n! \approx \sqrt{2 \pi n}(\frac{n}{e})^n$) for massive inputs to prevent catastrophic memory overflow.
* **Permutations (${}^nP_r$) & Combinations (${}^nC_r$):** Calculated using optimized multiplicative reduction and the hybrid Factorial Engine.

### IV. General Equation Solver (Root Finding)
* **The Bisection Method:** Interval Halving. A structurally unbreakable, guaranteed-convergence dragnet designed to hunt down the zeros of any arbitrary continuous mathematical function passed into the solver via C pointers.

### V. The Calculus Engine
* **Numerical Differentiation:** Evaluated using the Central Finite Difference Method ($f'(x) \approx \frac{f(x+h) - f(x-h)}{2h}$) for optimal $O(h^2)$ precision.
* **Numerical Integration:** Evaluated using Simpson’s 1/3 Rule, which fits parabolic arcs to the mathematical curve for high-precision area mapping.
* **Ordinary Differential Equations (ODEs):** Evaluated using the Runge-Kutta 4th Order Method (RK4). This serves as the bedrock for accurately projecting continuous physical systems forward through discrete time steps.

### VI. Special Functions Suite
* **The Gamma Function ($\Gamma(x)$):** Implemented using the Lanczos Approximation. Serves as the continuous, floating-point extension of the factorial engine for real and complex numbers.
* **The Beta Function ($B(x, y)$):** Calculated via its fundamental mathematical relationship to the Gamma function ($\frac{\Gamma(x)\Gamma(y)}{\Gamma(x+y)}$).
* **The Riemann Zeta Function ($\zeta(s)$):** Evaluated using the Euler-Maclaurin summation formula, mapping the intersection of continuous calculus and prime number theory.

---

## ⚙️ The Ritual of Compilation (Installation)
*(To be written once the interface is finalized...)*

## 🔮 Syntax of the Spells (Usage Examples)
*(To be written once the first modules are tested...)*

## ⚙️ Logs of Broken Quests (Error logs)
1). Returned 701 = Max number of iterations reached, but precision was not gained. Iterator error.
2). Returned 702 = Domain Error. The input was not within the domain of the function.
---
**Architect:** [Mystical Poet]  
**Status:** In Active Development