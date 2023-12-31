#pragma once
#include <iostream>
#include <random> //Contains C++11 random-number generation features

class RandomGenerator
{
public:
	RandomGenerator() {	}

	/**
	 * \brief Generates and prints a sequence of random numbers within a specified range.
	 *
	 * This method uses a default random number engine and a uniform distribution to
	 * generate a sequence of random numbers between the specified upper and lower bounds.
	 * The generated numbers are then displayed on the standard output.
	 *
	 * \param top The inclusive upper bound of the random number range.
	 * \param down The inclusive lower bound of the random number range.
	 * \param diewRolls The number of random die rolls to generate.
	 *
	 * The method initializes a default random number engine without explicitly seeding it,
	 * which may lead to less predictable randomness. It uses std::uniform_int_distribution
	 * to generate random numbers within the specified range. The generated numbers are
	 * displayed on the standard output, separated by spaces, and followed by a newline
	 * character. The number of die rolls is determined by the 'diewRolls' parameter.
	 */
	void randomGenerator(std::size_t top, std::size_t down, std::size_t diewRolls);

	/**
	 * \brief Generates and prints a sequence of random numbers optmized.
	 *
	 * This method uses a random number generator to produce a sequence of random
	 * numbers within a specified range and prints them to the standard output.
	 *
	 * \param top The inclusive upper bound of the random number range.
	 * \param down The inclusive lower bound of the random number range.
	 * \param diewRolls The number of random die rolls to generate.
	 *
	 * The method initializes a random number engine using std::random_device to seed
	 * it for better randomness. It then uses std::uniform_int_distribution to generate
	 * random numbers within the specified range. The generated numbers are stored in
	 * a std::vector to avoid reallocations and improve performance. Finally, the method
	 * prints the generated numbers to the standard output using a range-based for loop.
	 *
	 * \note The generated random numbers are separated by spaces and followed by a newline character.
	 */
	void randomGeneratorOptmized(std::size_t top, std::size_t down, std::size_t diewRolls);
};

