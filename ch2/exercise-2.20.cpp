#include <iostream>

int main20()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << *p1 << std::endl;

    return 0;
}

