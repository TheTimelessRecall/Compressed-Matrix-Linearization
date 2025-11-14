#include "TriDiagonal.hpp"

TriDiagonal::TriDiagonal(int n) : n(n) {
    arr = new int[3 * n - 2]();
}

TriDiagonal::~TriDiagonal() {
    delete[] arr;
}

int TriDiagonal::index(int i, int j) const {
    if (i == j) return (n - 1) + i - 1;
    if (i == j + 1) return i - 2;
    if (i == j - 1) return (2 * n - 1) + i - 1;
    return -1;
}

void TriDiagonal::set(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > n) return;
    if (i == j || i == j + 1 || i == j - 1)
        arr[index(i, j)] = val;
}

int TriDiagonal::get(int i, int j) const {
    if (i < 1 || i > n || j < 1 || j > n) return -1;
    if (i == j || i == j + 1 || i == j - 1)
        return arr[index(i, j)];
    return 0;
}

void TriDiagonal::display() const {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}
