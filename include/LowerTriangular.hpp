#pragma once
#include <iostream>

class LowerTriangular {
private:
    int n;
    int* arr;

    int index(int i, int j) const;

public:
    explicit LowerTriangular(int n);
    ~LowerTriangular();

    void set(int i, int j, int val);
    int get(int i, int j) const;
    void display() const;
};
