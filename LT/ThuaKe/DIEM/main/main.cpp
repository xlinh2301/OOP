#include <iostream>

class A{
private:
    int a, b;
protected:
    int c, d;
    void F2();
public:
    A();
    void F3(){
        a = 5;
    }
};
class B: public A{
private:
    int a, b;
protected:
    int c, d;
    void F2();
public:
    B();
    void F3(){
        A:a = 5;
    }
 };