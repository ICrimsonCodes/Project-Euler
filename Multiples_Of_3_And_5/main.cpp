// main.cpp
// Project Euler___Question No 1
// Program to calculate sum of multiples of 3 and 5
// Author Crimson Codes (@ICrimsonCodes)


#include<iostream>
using namespace std;

int main() {
	int sum{};
	cout << "Enter a till number : ";
	int n{};
	cin >> n;
	//Checking all the multiples of 3 until n
	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	cout << "Sum of multiples of 3 and 5 is: "<< sum ;
	return 0;
}