#pragma once
#include <iostream>

class Symmetric {
private:
    int n;
    int* arr;

    int index(int i, int j) const;

public:
    explicit Symmetric(int n);
    ~Symmetric();

    void set(int i, int j, int val);
    int get(int i, int j) const;
    void display() const;
};
