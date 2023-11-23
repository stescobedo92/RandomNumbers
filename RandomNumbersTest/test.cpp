#include "pch.h"

TEST(TestRandomGeneratorOptimized, CorrectNumberOfResults) {
	std::size_t top = 1;
	std::size_t down = 6;
	std::size_t diewRolls = 5;
	RandomGenerator randomGenerator;

	testing::internal::CaptureStdout();
	randomGenerator.randomGeneratorOptmized(top, down, diewRolls);
	std::string output = testing::internal::GetCapturedStdout();

	// Check if all generated numbers are within the specified range
	std::istringstream iss(output);
	std::size_t number;

	while (iss >> number) {
		EXPECT_GE(number, top);
		EXPECT_LE(number, down);
	}	
}