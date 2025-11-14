#pragma once
#include <iostream>

class TriDiagonal {
private:
    int n;
    int* arr;

    int index(int i, int j) const;

public:
    explicit TriDiagonal(int n);
    ~TriDiagonal();

    void set(int i, int j, int val);
    int get(int i, int j) const;
    void display() const;
};
