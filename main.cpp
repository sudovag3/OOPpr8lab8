#include <iostream>

// TASK 1
// #include "taskfirst.h"

//TASK 2
#include "tasksecond.h"

//LAB 8
#include "lab8.h"

int main() {
    //TASK 1
    // F f;

    // TASK 2
    D d;
    //используя явное указание разрешающей области видимости внутри класса, устраняем неоднозначность
    d.B::func1();
    d.C::func2();
    d.E::func1();

    //LAB8
    MyClass a("obj1");
    MyClass b("obj2");
    MyClass c("obj3");

    std::cout << a.get_id() << " " << a.get_name() << std::endl; // 1 obj1
    std::cout << b.get_id() << " " << b.get_name() << std::endl; // 2 obj2
    std::cout << c.get_id() << " " << c.get_name() << std::endl; // 3 obj3

    std::cout << MyClass::get_count() << std::endl; // 3

    return 0;
}
