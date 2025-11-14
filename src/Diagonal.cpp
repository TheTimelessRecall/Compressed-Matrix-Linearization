#include "Diagonal.hpp"

Diagonal::Diagonal(int n) : n(n) {
    arr = new int[n]();
}

Diagonal::~Diagonal() {
    delete[] arr;
}

void Diagonal::set(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > n) return;
    if (i == j) arr[i - 1] = val;
}

int Diagonal::get(int i, int j) const {
    if (i < 1 || i > n || j < 1 || j > n) return -1;
    return (i == j) ? arr[i - 1] : 0;
}

void Diagonal::display() const {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}