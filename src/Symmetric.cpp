#include "Symmetric.hpp"
#include <algorithm>

Symmetric::Symmetric(int n) : n(n) {
    arr = new int[(n * (n + 1)) / 2]();
}

Symmetric::~Symmetric() {
    delete[] arr;
}

int Symmetric::index(int i, int j) const {
    if (i < j) std::swap(i, j);
    return (i * (i - 1)) / 2 + (j - 1);
}

void Symmetric::set(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > n) return;
    arr[index(i, j)] = val;
}

int Symmetric::get(int i, int j) const {
    if (i < 1 || i > n || j < 1 || j > n) return -1;
    return arr[index(i, j)];
}

void Symmetric::display() const {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}
