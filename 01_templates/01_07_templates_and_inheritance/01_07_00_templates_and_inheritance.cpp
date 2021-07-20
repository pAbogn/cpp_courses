// How to define a class that inherited from a template
// How to define a template that inherited from a template
// Derived class becomes template if base class remains template as well

#include <iostream>

template <typename T>
struct generic_base {
    generic_base() { std::cout << "generic_base ctor" << std::endl; }
};

struct int_derived : public generic_base<int> {
    int_derived() { std::cout << "int_derived ctor" << std::endl; }
};

template <typename U>
struct generic_derived : public generic_base<U> {
    generic_derived() { std::cout << "generic_derived ctor" << std::endl; }
};

int main() {
    int_derived id{};
    std::cout << std::endl;
    generic_derived<char> gd{};
}
