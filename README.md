<p align="center">
  <img src="https://raw.githubusercontent.com/TheTimelessRecall/Compressed-Matrix-Linearization/main/media/banner.png" 
       alt="Compressed Matrix Linearization Banner" width="100%">
</p>

# Compressed-Matrix-Linearization

**Compressed-Matrix-Linearization** provides multiple classical matrices implemented using **1D compressed storage**, significantly reducing memory usage while preserving full matrix functionality.

This project demonstrates:

* How mathematical matrix patterns map to compact memory layouts
* How to handle indexing logic using C++ classes
* Reduced memory usage compared to full 2D arrays

It includes six compressed matrix types:
Diagonal, Lower Triangular, Upper Triangular, Symmetric, Tridiagonal, and Toeplitz.

---


## Matrix Types

| # | Type                 | Storage Size | Description                      |
| - | -------------------- | ------------ | -------------------------------- |
| 1 | **Diagonal**         | `n`          | Stores only the primary diagonal |
| 2 | **Lower Triangular** | `n(n+1)/2`   | Stores i ≥ j region              |
| 3 | **Upper Triangular** | `n(n+1)/2`   | Stores i ≤ j region              |
| 4 | **Symmetric**        | `n(n+1)/2`   | Uses A[i][j] = A[j][i]           |
| 5 | **Tridiagonal**      | `3n - 2`     | Only 3 diagonals stored          |
| 6 | **Toeplitz**         | `2n - 1`     | Constant values across diagonals |

---
## The Formulas (Indexing)

This is the core of the project. The following formulas map the 2D coordinate `(i, j)` (1-indexed) to the 0-indexed position in the 1D array, `arr[]`.

### 1. Lower Triangular (i ≥ j)

* **Formula (Row-Major):** `(i * (i - 1)) / 2 + (j - 1)`

### 2. Upper Triangular (i ≤ j)

* **Formula (Column-Major):** `(j * (j - 1)) / 2 + (i - 1)`

### 3. Symmetric

* **Formula:** Uses the Lower Triangular formula after ensuring the indices are in the lower region (`i ≥ j`).

### 4. TriDiagonal (3n - 2 elements)

* **Lower Diagonal (i = j + 1):** `i - 2`
* **Main Diagonal (i = j):** `(n - 1) + i - 1`
* **Upper Diagonal (i = j - 1):** `(2 * n - 1) + i - 1`

### 5. Toeplitz (2n - 1 elements)

Indexing is based on the difference `i - j`.

* **Upper Diagonals (i ≤ j):** `j - i`
* **Lower Diagonals (i > j):** `n + i - j - 1`

---

## Building

### Prerequisites

* g++ / clang++ (C++17)
* Windows, Linux, or macOS

### Build Command

```
g++ -std=c++17 tests/main.cpp src/*.cpp -I include -o matrix_app
```

Run:

```
./matrix_app
```

---

## Further Reading

For a detailed look at the formulas, diagrams, and complete code explanations for Diagonal, Tridiagonal, Symmetric, and Toeplitz matrices:

[C++ Matrix Compression: Reduce Memory Usage by 90% with Smart 1D Storage (Medium)](https://medium.com/@TimelessRecall/matrix-compression-in-c-slash-memory-usage-by-90-with-smart-1d-storage-048b7b05c8de)

---

## License

This project is released under the **MIT License**.
See the `LICENSE` file for details.
