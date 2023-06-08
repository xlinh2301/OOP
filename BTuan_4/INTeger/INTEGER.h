#ifndef INTEGER_H
#define INTEGER_H

#pragma once
#include<iostream>
using namespace std;
class INTEGER
{
private:
    float x;
public:
    INTEGER();
    INTEGER(float x){
        this->x = x;
    }
    ~INTEGER();
    friend ostream &operator<<(ostream &out,const INTEGER&); 
    friend istream &operator>>(istream &in,INTEGER&);
    INTEGER operator+(const INTEGER&);
    INTEGER operator-(const INTEGER&);
    INTEGER operator*(const INTEGER&);
    INTEGER operator/(const INTEGER&);
    INTEGER operator++(int);
    INTEGER operator++();
    INTEGER operator--();
    INTEGER operator--(int);
};


#endif