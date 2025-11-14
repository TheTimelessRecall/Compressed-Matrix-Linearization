<h1 align="center"> Compressed-Matrix-Linearization </h1>

<div align="center">

<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="180" alt="C++ Logo">

*Memory-efficient implementations of classical matrices using linearized 1D storage in C++.*

</div>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++17-blue?style=flat-square&logo=c%2B%2B">
  <img src="https://img.shields.io/badge/Matrix%20Types-6-green?style=flat-square">
  <img src="https://img.shields.io/github/license/TheTimelessRecall/Compressed-Matrix-Linearization?style=flat-square&color=blueviolet">
</p>

---

## What’s This Project?

**Compressed-Matrix-Linearization** is a collection of **six matrix compression techniques** implemented in C++.

Each matrix is stored in a **single linear 1D array** instead of a 2D matrix, reducing memory usage.

---

## Matrix Types Included

| # | Matrix Type          | Storage Used | Description                           |
| - | -------------------- | ------------ | ------------------------------------- |
| 1 | **Diagonal**         | `n`          | Only the diagonal elements are stored |
| 2 | **Lower Triangular** | `n(n+1)/2`   | Everything below & including diagonal |
| 3 | **Upper Triangular** | `n(n+1)/2`   | Everything above & including diagonal |
| 4 | **Symmetric**        | `n(n+1)/2`   | Uses property A[i][j] = A[j][i]       |
| 5 | **Tridiagonal**      | `3n - 2`     | Only 3 diagonals stored               |
| 6 | **Toeplitz**         | `2n - 1`     | All diagonals have constant values    |

---

## Features

* Linearized array storage for each matrix
* Clean class design (constructor, destructor, index mapping, set/get)
* Display functions for visualization
* Interactive console menu interface
* Index mapping formulas implemented in code for clarity

---

## Terminal Preview

```
===== Matrix Types =====
1. Diagonal Matrix
2. Lower Triangular Matrix
3. Upper Triangular Matrix
4. Symmetric Matrix
5. Tridiagonal Matrix
6. Toeplitz Matrix
0. Exit
Enter your choice:
```

---

## How to Build

### Compile everything:

```bash
g++ -std=c++17 main.cpp *.cpp -o matrix_app
```

### Run:

```bash
./matrix_app
```

---

## Example Usage

```
Enter matrix dimension: 4
Enter element at (1,1): 10
Enter element at (2,2): 20
Enter element at (3,3): 30
Enter element at (4,4): 40

Matrix:
10 0 0 0
0 20 0 0
0 0 30 0
0 0 0 40
```

---

## Contributing

Want to add:

* New compressed formats
* Arithmetic operations
* File I/O

Feel free to open a PR!

---

## License

MIT License. See `LICENSE` for details.

---
