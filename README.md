

# Compressed-Matrix-Linearization

<div align="center">

<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="170" alt="C++ Logo"/>

**Efficient C++ implementations of classical matrices using linearized 1D storage.**

</div>

<p align="center">
  <a href="#"><img src="https://img.shields.io/badge/Language-C++17-blue?style=flat-square&logo=c%2B%2B"></a>
  <a href="#"><img src="https://img.shields.io/badge/Matrix%20Types-6-success?style=flat-square"></a>
  <a href="#"><img src="https://img.shields.io/github/license/TheTimelessRecall/Compressed-Matrix-Linearization?style=flat-square&color=blueviolet"></a>
</p>

---

## Overview

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


## Example Usage (Diagonal Matrix)

```
Enter the matrix dimension: 4

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

Contributions are welcome. You may add:

* Additional compressed matrix types
* Matrix arithmetic (addition, multiplication, transpose)
* File I/O support
* Better CLI or UI

Submit a pull request to collaborate.

---

## License

This project is released under the **MIT License**.
See the `LICENSE` file for details.

---
