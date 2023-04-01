#include <iostream>

class MyClass {
public:
    MyClass(std::string name) : name(name), id(next_id++) {
        count++;
    }

    ~MyClass(){
        count--;
    }

    int get_id() const {
        return id;
    }

    std::string get_name() const {
        return name;
    }

    static int get_count() {
        return count;
    }

private:
    static int next_id;
    static int count;
    int id;
    std::string name;
};

int MyClass::next_id = 1;
int MyClass::count = 0;