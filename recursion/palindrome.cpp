#include <iostream>
#include <string>

// Palindrome: a string that is the same forwards and backwards
// racecar
// mom
// dad

// A string is a palindrome if and only if:
// 	1. the first character in the string is also the last character
//	2. everything in the middle is itself a palindrome
//
// We are going to treat empty strings as palindromes
// We are going to treat single-character strings as palindromes
bool palindrome(const std::string& str) {
	if (str.length() <= 1) {
		return true;
	}

	if (str.at(0) != str.at(str.length() - 1)) {
		return false;
	}

	// A substring is a smaller string contained within a larger string
	if (!palindrome(str.substr(1, str.length() - 2))) {
		return false;
	}

	return true;
}

int main() {
	std::cout << palindrome("racecar") << std::endl;

	std::cout << palindrome("Hello, World!") << std::endl;

	// Here's when recursion is often most appropriate: When you're
	// dealing with a problem that can easily be broken up into smaller
	// versions of itself, then you probably can get away with using
	// a recursive solution. Keep breaking the problem down until the
	// problems that you're dealing with are very samll and can be solved
	// "trivially". Those are the base cases.
	
	// In C++, and a lot of other imperative programming languages,
	// recursive solutions are often more expensive, at least in terms of
	// memory, than their iterative (loop-based) counterparts.
}
