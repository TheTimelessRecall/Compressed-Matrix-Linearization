#pragma once
#include <iostream>

class UpperTriangular {
private:
    int n;
    int* arr;

    int index(int i, int j) const;

public:
    explicit UpperTriangular(int n);
    ~UpperTriangular();

    void set(int i, int j, int val);
    int get(int i, int j) const;
    void display() const;
};
