# Numerical Methods in C++

A collection of numerical algorithms implemented from scratch in modern C++.

## Overview

This repository is a personal project focused on exploring numerical methods, developing mathematical intuition, and improving C++ software engineering skills.

The goal is to implement fundamental numerical algorithms without relying on external numerical libraries, with an emphasis on:

- Understanding the mathematics behind each algorithm.
- Writing clean, reusable, and maintainable C++ code.
- Exploring numerical accuracy, convergence, and stability.
- Learning CMake, Git, and project organisation.
- Testing algorithms against known mathematical solutions.

## Algorithms

| Category | Algorithm | Status |
|---|---|---|
| Root Finding | Newton–Raphson | 🚧 In Progress |
| Root Finding | Bisection | Planned |
| Root Finding | Secant Method | Planned |
| Numerical Integration | Trapezoidal Rule | Planned |
| Numerical Integration | Simpson's Rule | Planned |
| Linear Algebra | Gaussian Elimination | Planned |
| Differential Equations | Euler's Method | Planned |
| Differential Equations | Runge–Kutta (RK4) | Planned |
| Optimisation | Gradient Descent | Planned |

The roadmap may evolve as the project develops.

## Getting Started

### Prerequisites

- A modern C++ compiler
- CMake 3.23 or later
- Git

The project aims to use C++17 or later and the C++ standard library.

### Building

Clone the repository:

```bash
git clone https://github.com/<your-username>/numerical-methods-cpp.git
cd numerical-methods-cpp
```

Configure the project:

```bash
cmake -S . -B build
```

Build:

```bash
cmake --build build
```

Run the current Newton–Raphson executable (on a typical Linux build):

```bash
./build/NewtonRaphson
```

Executable locations may vary depending on the operating system and CMake generator.

## Numerical Methods

### 1. Newton–Raphson Method

**Status:** In Progress

The Newton–Raphson method is an iterative root-finding algorithm that approximates solutions to nonlinear equations of the form:

\[
f(x)=0
\]

Given an initial estimate \(x_0\), successive approximations are calculated using:

\[
x_{n+1}=x_n-\frac{f(x_n)}{f'(x_n)}
\]

The implementation is being developed to support configurable convergence tolerances, maximum iteration limits, derivative checks, and convergence reporting.

**Topics to investigate:**
- Sensitivity to initial guesses
- Convergence rates
- Failure conditions
- Numerical precision and floating-point limitations

## Project Philosophy

The emphasis of this repository is on learning through implementation.

Algorithms are developed from their mathematical definitions rather than copied from numerical computing libraries.

As the project grows, the intention is to separate numerical algorithms from executable examples and introduce independent testing and validation.

Performance optimisation and more advanced C++ techniques may be explored after correctness has been established.

## Future Improvements

- Reusable numerical algorithm interfaces
- Automated unit testing
- Convergence analysis and benchmarks
- Improved error handling
- Additional numerical methods
- Documentation and examples for each algorithm

## License

No licence has been selected yet.

---

*An ongoing exploration of numerical mathematics and modern C++.*
