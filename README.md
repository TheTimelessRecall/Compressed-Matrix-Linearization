# Compressed-Matrix-Linearization

**Compressed-Matrix-Linearization** provides multiple classical matrices implemented using **1D compressed storage**, significantly reducing memory usage while preserving full matrix functionality.

This project demonstrates:

* How mathematical matrix patterns map to compact memory layouts
* How to handle indexing logic using C++ classes
* Reduced memory usage compared to full 2D arrays

It includes six compressed matrix types:
Diagonal, Lower Triangular, Upper Triangular, Symmetric, Tridiagonal, and Toeplitz.

---

## Blog Post

<table>
  <tr>
    <td width="30%">
      <a href="https://medium.com/@TimelessRecall/matrix-compression-in-c-slash-memory-usage-by-90-with-smart-1d-storage-048b7b05c8de" target="_blank">
        <img src="https://miro.medium.com/v2/resize:fit:4800/format:webp/1*s6Ux5MMiGHL7mPDCm6ouQg.jpeg"
             width="100%" style="border-radius: 10px;" alt="Medium Article Thumbnail"/>
      </a>
    </td>
    <td valign="top" style="padding-left: 20px;">
      <a href="https://medium.com/@TimelessRecall/matrix-compression-in-c-slash-memory-usage-by-90-with-smart-1d-storage-048b7b05c8de" target="_blank">
        <h3 style="margin-top: 0;">C++ Matrix Compression: Reduce Memory Usage by 90% with Smart 1D Storage</h3>
      </a>
      <p><strong>Jul 13, 2025</strong></p>
      <p>Deep dive into Diagonal, Tridiagonal, Symmetric, and Toeplitz matrices, including formulas, diagrams, and full code explanations.</p>
    </td>
  </tr>
</table>

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

## Features

* Efficient 1D memory compression
* Class-based design for each matrix type
* `set(i,j)`, `get(i,j)`, and `display()` supported
* Clean C++17 codebase

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


## License

This project is released under the **MIT License**.
See the `LICENSE` file for details.
