#include <iostream>
#include <ctime>

#include "MT19937.hpp"

int main(void)
{
    MT19937 gen(time(0)); // param: seed

    for (int i = 0; i < 10; ++i)
        std::cout << gen.GetRandom() << std::endl;
    return 0;
}