#include <iostream>
#include "RandomGenerator.h"

int main()
{
    RandomGenerator randomGenerator;
    
    randomGenerator.randomGenerator(1, 8, 12);
    randomGenerator.randomGeneratorOptmized(1, 8, 12);

    return 0;
}