#include <iostream>

// What is the fibonacci sequence?
//
// The fibonacci sequence is the following sequence of numbers:
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ... (Nth number is the sum of the previous
// 	two numbers)


// In recursion, you always need a base case: where the recursion stops
// fib(2) = 1
// fib(1) = 0
// fib(n) = fib(n-1) + fib(n-2), for n >= 3
int fib(int n) {
	// Always start with your base case(s)
	if (n == 2) {
		return 1;
	} else if (n == 1) {
		return 0;
	}

	// In all other cases, use recursion:
	return fib(n - 1) + fib(n - 2);
}

int main() {
	// What is recursion?
	//
	// An oversimplified definition: When a function calls itself,
	// 	directly or indirectly
	
	// Some problems are solved well with recursion
	
	// Some problems are not (depending on the programming language)
}
