#include <iostream>

#include "../somelib/somelib.hpp"

template <class T>
T sum(T a, T b)
{
    return a + b;
}

int main(int argc, const char *argv[])
{
    std::cout << std::to_string(sum(2, 2)) << std::endl;
    Somelib{2, 3};
}
