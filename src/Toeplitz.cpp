#include "Toeplitz.hpp"

Toeplitz::Toeplitz(int n) : n(n) {
    arr = new int[2 * n - 1]();
}

Toeplitz::~Toeplitz() {
    delete[] arr;
}

int Toeplitz::index(int i, int j) const {
    if (i <= j)
        return j - i;
    else
        return n + i - j - 1;
}

void Toeplitz::set(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > n) return;
    arr[index(i, j)] = val;
}

int Toeplitz::get(int i, int j) const {
    if (i < 1 || i > n || j < 1 || j > n) return -1;
    return arr[index(i, j)];
}

void Toeplitz::display() const {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}
