#pragma once
#include <iostream>

class Diagonal {
private:
    int n;
    int* arr;
public:
    explicit Diagonal(int n);
    ~Diagonal();

    void set(int i, int j, int val);
    int get(int i, int j) const;
    void display() const;
};
