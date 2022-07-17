// main.cpp
// Project Euler___Question No 2
// Program to calculate sum of Even Terms of Fibonacci
// Author Crimson Codes (@ICrimsonCodes)

#include<iostream>

int main() {
	int previousTerm{ 1 }, currentTerm{ 2 }, nextTerm{ 0 }, sum{ 0 };
	while (nextTerm <= 4000000)
	{
		if (nextTerm <= 4000000 && currentTerm % 2 == 0) {
			sum += currentTerm;
		}
		nextTerm = previousTerm + currentTerm;
		previousTerm = currentTerm;
		currentTerm = nextTerm;
	}
	std::cout << sum;
	}