# Codex-Arithmetica: Computational Bibliography

This document provides the formal academic references and computer arithmetic literature governing all 28 functions of **Book I: The Grimoire**. Citations follow the official **IEEE Citation Reference Manual** standard.

---

### [1] `anchor(double x)`
* **Operation:** Floating-point floor function $\lfloor x \rfloor$ and integer residue truncation.
* **Citation:** *IEEE Standard for Floating-Point Arithmetic*, IEEE Std 754-2019, Section 5.9 ("Rounding-direction attributes"), pp. 38–42; Section 6.2 ("Conversion operations"), pp. 48–52, Jul. 2019, doi: [10.1109/IEEESTD.2019.8766229](https://doi.org/10.1109/IEEESTD.2019.8766229).

### [2] `zenith(int n, double x)`
* **Operation:** Binary exponentiation / exponentiation by squaring ($x^n$).
* **Citation:** D. E. Knuth, *The Art of Computer Programming, Volume 2: Seminumerical Algorithms*, 3rd ed. Boston, MA, USA: Addison-Wesley, 1997, Section 4.6.3 ("Evaluation of powers"), pp. 461–466.

### [3] `origin_nroot(int n, double x)`
* **Operation:** Arbitrary $n$-th root extraction ($\sqrt[n]{x}$) via Newton-Raphson iteration.
* **Citation:** M. D. Ercegovac, T. Lang, J.-M. Muller, and A. Tisserand, "Reciprocation, square root, inverse square root, and some elementary functions using small multipliers," *IEEE Trans. Comput.*, vol. 49, no. 7, pp. 628–637, Jul. 2000, doi: [10.1109/12.863035](https://doi.org/10.1109/12.863035).

### [4] `astral_sin(double x)`
* **Operation:** Trigonometric sine ($\sin x$) via Payne-Hanek modular reduction and Horner's scheme.
* **Citation:** M. H. Payne and R. N. Hanek, "Radian reduction for large arguments," *ACM SIGNUM Newslett.*, vol. 18, no. 1, pp. 19–24, Jan. 1983, doi: [10.1145/1057600.1057602](https://doi.org/10.1145/1057600.1057602).

### [5] `astral_cos(double x)`
* **Operation:** Trigonometric cosine ($\cos x$) via quadrant symmetry and polynomial expansion.
* **Citation:** N. Brisebarre, D. Defour, P. Kornerup, J.-M. Muller, and N. Revol, "A new range-reduction algorithm," *IEEE Trans. Comput.*, vol. 54, no. 3, pp. 331–339, Mar. 2005, doi: [10.1109/TC.2005.58](https://doi.org/10.1109/TC.2005.58).

### [6] `astral_tan(double x)`
* **Operation:** Trigonometric tangent ($\tan x$) quotient evaluation and pole singularity interception.
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 4 ("Trigonometric functions"), pp. 103–140.

### [7] `astral_sec(double x)`
* **Operation:** Trigonometric secant ($\sec x = 1/\cos x$) via reciprocal evaluation with zero-divisor guards.
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 4 ("Trigonometric functions"), pp. 103–140.

### [8] `astral_csc(double x)`
* **Operation:** Trigonometric cosecant ($\csc x = 1/\sin x$) via reciprocal evaluation with pole guards.
* **Citation:** M. J. Schulte and E. E. Swartzlander, "Hardware designs for exactly rounded elementary functions," *IEEE Trans. Comput.*, vol. 43, no. 8, pp. 964–973, Aug. 1994, doi: [10.1109/12.295858](https://doi.org/10.1109/12.295858).

### [9] `astral_cot(double x)`
* **Operation:** Trigonometric cotangent ($\cot x = \cos x / \sin x$) co-ratio evaluation.
* **Citation:** W. J. Cody and W. Waite, *Software Manual for the Elementary Functions*, Englewood Cliffs, NJ, USA: Prentice-Hall, 1980, Chapter 8 ("Tangent and Cotangent"), pp. 104–124.

### [10] `arch_tan(double x)`
* **Operation:** Inverse tangent ($\arctan x$) via rational Newton-Raphson iteration and argument inversion.
* **Citation:** J. A. Ezquerro and M. A. Hernández, "On the R-order of the Halley method," *J. Math. Anal. Appl.*, vol. 303, no. 2, pp. 591–601, Mar. 2005, doi: [10.1016/j.jmaa.2004.08.057](https://doi.org/10.1016/j.jmaa.2004.08.057).

### [11] `arch_sin(double x)`
* **Operation:** Inverse sine ($\arcsin x$) via right-triangle algebraic reduction to arctangent.
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 5 ("Inverse trigonometric functions"), pp. 141–168.

### [12] `arch_cos(double x)`
* **Operation:** Inverse cosine ($\arccos x$) via complementary angle translation ($\frac{\pi}{2} - \arcsin x$).
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 5 ("Inverse trigonometric functions"), pp. 141–168.

### [13] `arch_sec(double x)`
* **Operation:** Inverse secant ($\sec^{-1} x$) via reciprocal identity $\arccos(1/x)$.
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 5 ("Inverse trigonometric functions"), pp. 141–168.

### [14] `arch_csc(double x)`
* **Operation:** Inverse cosecant ($\csc^{-1} x$) via reciprocal identity $\arcsin(1/x)$.
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 5 ("Inverse trigonometric functions"), pp. 141–168.

### [15] `arch_cot(double x)`
* **Operation:** Inverse cotangent ($\cot^{-1} x$) via complementary translation ($\frac{\pi}{2} - \arctan x$).
* **Citation:** J.-M. Muller, *Elementary Functions: Algorithms and Implementation*, 3rd ed. Boston, MA, USA: Birkhäuser, 2016, Chapter 5 ("Inverse trigonometric functions"), pp. 141–168.

### [16] `eon_growth(double x)`
* **Operation:** Natural exponential ($e^x$) via $k\ln 2$ additive argument reduction and Horner Taylor series.
* **Citation:** P. T. P. Tang, "Table-driven implementation of the exponent and trig functions in IEEE floating-point arithmetic," in *Proc. 9th IEEE Symp. Comput. Arithmetic (ARITH)*, 1989, pp. 62–68, doi: [10.1109/ARITH.1989.708816](https://doi.org/10.1109/ARITH.1989.708816).

### [17] `eon_log(double x)`
* **Operation:** Natural logarithm ($\ln x$) via Halley’s rational cubic iteration.
* **Citation:** J. M. Gutiérrez and M. A. Hernández, "A family of Chebyshev-Halley type methods in Banach spaces," *Bull. Aust. Math. Soc.*, vol. 55, no. 1, pp. 113–130, Jan. 1997, doi: [10.1017/S0004972700030586](https://doi.org/10.1017/S0004972700030586).

### [18] `log_base(double b, double x)`
* **Operation:** Arbitrary base logarithm ($\log_b x$) via change-of-base transformation ratio.
* **Citation:** N. J. Higham, *Accuracy and Stability of Numerical Algorithms*, 2nd ed. Philadelphia, PA, USA: SIAM, 2002, Chapter 1, pp. 1–34.

### [19] `base_growth(double b, double x)`
* **Operation:** General exponentiation ($b^x$) via exponential-logarithmic mapping $e^{x \ln b}$.
* **Citation:** W. J. Cody and W. Waite, *Software Manual for the Elementary Functions*, Englewood Cliffs, NJ, USA: Prentice-Hall, 1980, Chapter 7 ("Power Function"), pp. 85–103.

### [20] `stellar_factorial(int x)`
* **Operation:** Exact integer factorial ($x!$) with 64-bit hardware boundary guarding.
* **Citation:** D. E. Knuth, *The Art of Computer Programming, Volume 1: Fundamental Algorithms*, 3rd ed. Boston, MA, USA: Addison-Wesley, 1997, Section 1.2.5 ("Factorials"), pp. 45–52.

### [21] `stellar_combinations(int n, int r)`
* **Operation:** Exact binomial coefficients ($\binom{n}{r}$) via interleaved product/quotient loops and overflow checks.
* **Citation:** D. E. Knuth, *The Art of Computer Programming, Volume 1: Fundamental Algorithms*, 3rd ed. Boston, MA, USA: Addison-Wesley, 1997, Section 1.2.6 ("Binomial coefficients"), pp. 52–54.

### [22] `stellar_permutations(int n, int r)`
* **Operation:** Exact permutations ($P(n, r)$) via descending product loop.
* **Citation:** R. L. Graham, D. E. Knuth, and O. Patashnik, *Concrete Mathematics: A Foundation for Computer Science*, 2nd ed. Reading, MA, USA: Addison-Wesley, 1994, Chapter 2, pp. 21–66.

### [23] `abyssal_factorial(long int x)`
* **Operation:** Continuous log-factorial ($\ln(x!)$) via asymptotic Stirling series with Bernoulli corrections.
* **Citation:** R. P. Brent, "On the accuracy of asymptotic approximations to the log-gamma and Riemann–Siegel theta functions," *J. Aust. Math. Soc.*, vol. 105, no. 2, pp. 156–175, Oct. 2018, doi: [10.1017/S144678871700039X](https://doi.org/10.1017/S144678871700039X).

### [24] `abyssal_combinations(long int n, long int r)`
* **Operation:** Extreme-scale log-binomial coefficients ($\ln\binom{n}{r}$) via log-space additive decomposition.
* **Citation:** G. Nemes, "Asymptotic expansion for $\log n!$ in terms of the reciprocal of a triangular number," *Acta Math. Hungarica*, vol. 129, no. 3, pp. 254–262, Nov. 2010, doi: [10.1007/s10474-010-0027-5](https://doi.org/10.1007/s10474-010-0027-5).

### [25] `abyssal_permutations(long int n, long int r)`
* **Operation:** Extreme-scale log-permutations ($\ln P(n, r)$) via log-space subtraction.
* **Citation:** R. P. Brent and P. Zimmermann, *Modern Computer Arithmetic*, Cambridge, UK: Cambridge University Press, 2010, Chapter 5 ("Elementary functions"), Section 5.7 ("Gamma function"), pp. 223–230.

### [26] `sacred_pie()`
* **Operation:** High-precision evaluation of $\pi$ via Machin's inverse tangent identity.
* **Citation:** D. Shanks and J. W. Wrench, "Calculation of $\pi$ to 100,000 decimals," *Math. Comput.*, vol. 16, no. 77, pp. 76–99, Jan. 1962, doi: [10.1090/S0025-5718-1962-0136051-9](https://doi.org/10.1090/S0025-5718-1962-0136051-9).

### [27] `fractional_e(int k)`
* **Operation:** High-precision evaluation of Euler's number $e$ via continued fraction expansion.
* **Citation:** C. D. Olds, "The simple continued fraction for $e$," *Amer. Math. Monthly*, vol. 77, no. 9, pp. 968–974, Nov. 1970, doi: [10.1080/00029890.1970.11992634](https://doi.org/10.1080/00029890.1970.11992634).

### [28] `eon_remnant(int l)`
* **Operation:** Euler-Mascheroni constant ($\gamma$) via accelerated asymptotic harmonic series.
* **Citation:** R. P. Brent and E. M. McMillan, "Some new algorithms for high-precision computation of Euler’s constant," *Math. Comput.*, vol. 34, no. 149, pp. 305–312, Jan. 1980, doi: [10.1090/S0025-5718-1980-0551307-3](https://doi.org/10.1090/S0025-5718-1980-0551307-3).
