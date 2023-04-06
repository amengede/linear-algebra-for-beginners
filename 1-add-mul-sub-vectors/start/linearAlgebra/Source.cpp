#include "linalg/linalg.h"
#include <iostream>

int main() {
	linalg::vec2 u = { 1,2 }, v = { 3,4 };

	linalg::vec2 w = u + v;

	std::cout << u << " + " << v << " = " << w << std::endl;

	w = 4 * u;

	std::cout << "4 * " << u << " = " << w << std::endl;

	w = u - v * 2;

	std::cout << u << " - " << v << " * 2 = " << w << std::endl;

	return 0;
}