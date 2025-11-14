#include <iostream>
#include "Diagonal.hpp"
#include "LowerTriangular.hpp"
#include "UpperTriangular.hpp"
#include "Symmetric.hpp"
#include "TriDiagonal.hpp"
#include "Toeplitz.hpp"
#include "MatrixUtils.hpp"

int main() {
    int choice = -1;
    int n;

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

        if (choice < 0 || choice > 6) {
            std::cout << "Invalid choice!\n";
            continue;
        }

        std::cout << "Enter matrix dimension: ";
        std::cin >> n;

        if (n <= 0) {
            std::cout << "Dimension must be positive.\n";
            continue;
        }

        switch (choice) {
            case 1: {
                Diagonal m(n);
                fillMatrix(m, n);
                std::cout << "\nMatrix:\n";
                m.display();
                break;
            }
            case 2: {
                LowerTriangular m(n);
                fillMatrix(m, n);
                std::cout << "\nMatrix:\n";
                m.display();
                break;
            }
            case 3: {
                UpperTriangular m(n);
                fillMatrix(m, n);
                std::cout << "\nMatrix:\n";
                m.display();
                break;
            }
            case 4: {
                Symmetric m(n);
                fillMatrix(m, n);
                std::cout << "\nMatrix:\n";
                m.display();
                break;
            }
            case 5: {
                TriDiagonal m(n);
                fillMatrix(m, n);
                std::cout << "\nMatrix:\n";
                m.display();
                break;
            }
            case 6: {
                Toeplitz m(n);
                fillMatrix(m, n);
                std::cout << "\nMatrix:\n";
                m.display();
                break;
            }
        }
    }

    return 0;
}
