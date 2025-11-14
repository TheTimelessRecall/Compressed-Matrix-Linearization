#include "UpperTriangular.hpp"

UpperTriangular::UpperTriangular(int n) : n(n) {
    arr = new int[(n * (n + 1)) / 2]();
}

UpperTriangular::~UpperTriangular() {
    delete[] arr;
}

int UpperTriangular::index(int i, int j) const {
    return (j * (j - 1)) / 2 + (i - 1);
}

void UpperTriangular::set(int i, int j, int val) {
    if (i < 1 || i > n || j < 1 || j > n) return;
    if (i <= j)
        arr[index(i, j)] = val;
}

int UpperTriangular::get(int i, int j) const {
    if (i < 1 || i > n || j < 1 || j > n) return -1;
    return (i <= j) ? arr[index(i, j)] : 0;
}

void UpperTriangular::display() const {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            std::cout << get(i, j) << " ";
        std::cout << "\n";
    }
}
