#include <iostream>

int main33()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;

    const auto f = ci;

    auto &g = ci;
    //auto &h = 42;
    const auto &j = 42;

    std::cout << a << std::endl;
    a = 42;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    b = 42;
    std::cout << b << std::endl;

    std::cout << c << std::endl;
    c = 42;
    std::cout << c << std::endl;
    //d = 42;   // d is pointer to int
    //e = 42;   // e is pointer to const int
    //g = 42;   // g is reference to const int

    return 0;
}

