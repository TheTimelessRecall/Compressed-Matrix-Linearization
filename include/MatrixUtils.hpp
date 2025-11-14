#pragma once
#include <iostream>

template <typename MatrixType>
void fillMatrix(MatrixType& matrix, int n) {
    std::cout << "Enter matrix elements row-wise:\n";
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j) {
            int val; 
            std::cin >> val;
            matrix.set(i, j, val);
        }
    std::cout << "Matrix stored in compressed form:\n";
    matrix.display();
}
