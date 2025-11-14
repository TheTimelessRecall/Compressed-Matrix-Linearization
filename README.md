# MatrixOptimisedADT (C++ Project)

A space-optimized matrix toolkit in C++ containing Diagonal, Triangular, Symmetric, Tridiagonal, and Toeplitz matrix classes, implemented using compressed storage and custom indexing.

---

## Directory Structure

```
MatrixOptimisedADT/
├── include/
│   ├── Diagonal.hpp
│   ├── LowerTriangular.hpp
│   ├── UpperTriangular.hpp
│   ├── Symmetric.hpp
│   ├── TriDiagonal.hpp
│   ├── Toeplitz.hpp
│   └── MatrixUtils.hpp
│
├── src/
│   ├── Diagonal.cpp
│   ├── LowerTriangular.cpp
│   ├── UpperTriangular.cpp
│   ├── Symmetric.cpp
│   ├── TriDiagonal.cpp
│   ├── Toeplitz.cpp
│   └── MatrixUtils.cpp
│
├── tests/
│   └── main.cpp
│
└── README.md
```

---

##  Build & Run

### Run the Menu Program

```bash
g++ -std=c++17 -Iinclude src/*.cpp tests/main.cpp -o matrix_runner

./matrix_runner           # Linux/macOS
matrix_runner.exe         # Windows
```

---

## Menu Options

```
===== Matrix Types =====
1. Diagonal Matrix
2. Lower Triangular Matrix
3. Upper Triangular Matrix
4. Symmetric Matrix
5. Tridiagonal Matrix
6. Toeplitz Matrix
0. Exit
```

---

## Sample Run

```
Enter the matrix dimension: 3

Enter matrix elements row-wise:
1 0 0
2 3 0
4 5 6
Matrix stored in compressed form:
1 0 0
2 3 0
4 5 6
```

---

<p align="center">
  <strong>TimelessRecall</strong><br>
  <br>
  <a href="https://github.com/TheTimelessRecall" target="_blank">
    <img src="https://img.shields.io/badge/GitHub-000000?style=for-the-badge&logo=github&logoColor=white" alt="GitHub" />
  </a>
  <a href="https://medium.com/@TimelessRecall" target="_blank">
    <img src="https://img.shields.io/badge/Medium-000000?style=for-the-badge&logo=medium&logoColor=white" alt="Medium" />
  </a>
  <a href="https://x.com/TimelessRecall" target="_blank">
    <img src="https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white" alt="Twitter" />
  </a>
</p>