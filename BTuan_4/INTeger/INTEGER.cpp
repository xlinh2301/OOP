#include "INTEGER.h"

INTEGER::INTEGER() : x(0){}
INTEGER::~INTEGER(){}
ostream &operator<<(ostream &out,const INTEGER &a)
{
    out<<a.x;
    return out;
}
istream &operator>>(istream &in,INTEGER &a)
{
    in>>a.x;
    return in;
}
INTEGER INTEGER::operator+(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x+a.x;
    return z;
}
INTEGER INTEGER::operator-(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x-a.x;
    return z;
}
INTEGER INTEGER::operator*(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x*a.x;
    return z;
}
INTEGER INTEGER::operator/(const INTEGER &a)
{
    INTEGER z;
    z.x=this->x/a.x;
    return z;
}
INTEGER INTEGER::operator++()
{
    x += 1;
    return *this;
}
INTEGER INTEGER::operator++(int){
    INTEGER t = *this;
    t = t++;
    return t;
}
INTEGER INTEGER::operator--()
{
    x -= 1;
    return *this;
}
INTEGER INTEGER::operator--(int){
    INTEGER t = *this;
    t = t++;
    return t;
}