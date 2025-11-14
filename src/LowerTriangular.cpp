#include "LowerTriangular.hpp"

LowerTriangular::LowerTriangular(int n) : n(n) {
    arr = new int[(n * (n + 1)) / 2]();
}

LowerTriangular::~LowerTriangular() {
    delete[] arr;
}

int LowerTriangular::index(int i, int j) const {
    return (i * (i - 1)) / 2 + (j - 1);
}

void LowerTriangular::set(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > n) return;
    if (i >= j)
        arr[index(i, j)] = val;
}

int LowerTriangular::get(int i, int j) const {
    if (i < 1 || i > n || j < 1 || j > n) return -1;
    return (i >= j) ? arr[index(i, j)] : 0;
}

void LowerTriangular::display() const {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}
