#include "RandomGenerator.h"

void RandomGenerator::randomGenerator(std::size_t top, std::size_t down, std::size_t diewRolls) {
    std::default_random_engine engine{};

    std::uniform_int_distribution randomDie{ top, down };

    for (std::size_t counter{ 1 }; counter <= diewRolls; ++counter) {
        std::cout << randomDie(engine) << " ";
    }

    std::cout << '\n';
}

void RandomGenerator::randomGeneratorOptmized(std::size_t top, std::size_t down, std::size_t diewRolls) {
    std::random_device rd;
    std::default_random_engine engine(rd());

    std::uniform_int_distribution<std::size_t> randomDie(top, down);

    std::vector<std::size_t> results(diewRolls);

    for (std::size_t& result : results) {
        result = randomDie(engine);
    }

    // Use range-based for loop for cleaner code
    for (const auto& result : results) {
        std::cout << result << " ";
    }

    std::cout << '\n';
}
