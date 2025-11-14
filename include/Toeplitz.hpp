#pragma once
#include <iostream>

class Toeplitz {
private:
    int n;
    int* arr;

    int index(int i, int j) const;

public:
    explicit Toeplitz(int n);
    ~Toeplitz();

    void set(int i, int j, int val);
    int get(int i, int j) const;
    void display() const;
};
