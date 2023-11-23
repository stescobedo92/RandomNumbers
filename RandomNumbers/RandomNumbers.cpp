#include <iostream>
#include <random> //Contains C++11 random-number generation features

void randomGenerator(std::size_t top, std::size_t down, std::size_t diewRolls) {
    //engine that produces random numbers
    std::default_random_engine engine{};

    //distribution tha produces int vaues between 1 - n with equal likelihood
    std::uniform_int_distribution randomDie{ top, down };

    //display n ramdom die rolls
    for (std::size_t counter{ 1 }; counter <= diewRolls; ++counter) {
        std::cout << randomDie(engine) << " ";
    }

    std::cout << '\n';
}

int main()
{
    randomGenerator(1, 8, 12);
    return 0;
}