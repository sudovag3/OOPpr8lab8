#include <iostream>

class A {
public:
    A() {
        std::cout << "A constructor" << std::endl;
    }
    ~A() {
        std::cout << "A destructor" << std::endl;
    }
    void a1() {
        std::cout << "A::a1()" << std::endl;
    }
    void a2() {
        std::cout << "A::a2()" << std::endl;
    }
};

class B : public A {
public:
    B() {
        std::cout << "B constructor" << std::endl;
    }
    ~B() {
        std::cout << "B destructor" << std::endl;
    }
};

class C : public A {
public:
    C() {
        std::cout << "C constructor" << std::endl;
    }
    ~C() {
        std::cout << "C destructor" << std::endl;
    }
};

class E : public A {
public:
    E() {
        std::cout << "E constructor" << std::endl;
    }
    ~E() {
        std::cout << "E destructor" << std::endl;
    }
};

class D : public B, public C, public E {
public:
    D() {
        std::cout << "D constructor" << std::endl;
    }
    ~D() {
        std::cout << "D destructor" << std::endl;
    }
};

class F : public D {
public:
    F() {
        std::cout << "F constructor" << std::endl;
    }
    ~F() {
        std::cout << "F destructor" << std::endl;
    }
};