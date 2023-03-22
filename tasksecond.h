#include <iostream>

class A {
public:
    void func1() {
        std::cout << "Function 1 called from class A" << std::endl;
    }
    
    void func2() {
        std::cout << "Function 2 called from class A" << std::endl;
    }
};

class B : public A {
public:
    B() {
        some_field = 10;
        std::cout << "B constructor called" << std::endl;
    }
    
private:
    int some_field;
};

class C : public A {
public:
    C() {
        some_field = "hello";
        std::cout << "C constructor called" << std::endl;
    }
    
private:
    std::string some_field;
};

class E : public A {
public:
    E() {
        some_field = 3.14;
        std::cout << "E constructor called" << std::endl;
    }
    
private:
    double some_field;
};

class D : public B, public C, public E {
public:
    D() {
        some_field = true;
        std::cout << "D constructor called" << std::endl;
    }
    
private:
    bool some_field;
};