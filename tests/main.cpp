#include <iostream>
#include "Diagonal.hpp"
#include "LowerTriangular.hpp"
#include "UpperTriangular.hpp"
#include "Symmetric.hpp"
#include "TriDiagonal.hpp"
#include "Toeplitz.hpp"
#include "MatrixUtils.hpp"

int main() {
    int choice, n;
    while (true) {
        std::cout << "\n===== Matrix Types =====\n"
                  << "1. Diagonal Matrix\n"
                  << "2. Lower Triangular Matrix\n"
                  << "3. Upper Triangular Matrix\n"
                  << "4. Symmetric Matrix\n"
                  << "5. Tridiagonal Matrix\n"
                  << "6. Toeplitz Matrix\n"
                  << "0. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 0) break;

        std::cout << "Enter the matrix dimension: ";
        std::cin >> n;

        switch (choice) {
            case 1: {
                Diagonal m(n);
                fillMatrix(m, n);
                break;
            }
            case 2: {
                LowerTriangular m(n);
                fillMatrix(m, n);
                break;
            }
            case 3: {
                UpperTriangular m(n);
                fillMatrix(m, n);
                break;
            }
            case 4: {
                Symmetric m(n);
                fillMatrix(m, n);
                break;
            }
            case 5: {
                TriDiagonal m(n);
                fillMatrix(m, n);
                break;
            }
            case 6: {
                Toeplitz m(n);
                fillMatrix(m, n);
                break;
            }
            default:
                std::cout << "Invalid choice!\n";
                break;
        }
    }
    return 0;
}
