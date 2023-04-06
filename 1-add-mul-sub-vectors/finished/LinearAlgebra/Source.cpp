#include "linalg/linalg.h"
#include <iostream>

int main() {

	std::cout << "---- vec2 ----" << std::endl;
	linalg::vec2 u1 = { 1,2 }, u2 = { 3,4 };
	linalg::vec2 u3 = u1 + u2;
	std::cout << u1 << " + " << u2 << " = " << u3 << std::endl;

	u3 = u1 - u2 * 2;
	std::cout << u1 << " - " << u2 << " * 2 = " << u3 << std::endl;

	u3 = 4 * u1 + u2;
	std::cout << "4 * " << u1 << " + " << u2 << " = " << u3 << std::endl;

	std::cout << "---- vec3 ----" << std::endl;
	linalg::vec3 v1 = { 1,2,3 }, v2 = { 4,5,6 };
	linalg::vec3 v3 = v1 + v2;
	std::cout << v1 << " + " << v2 << " = " << v3 << std::endl;

	v3 = v1 - v2 * 2;
	std::cout << v1 << " - " << v2 << " * 2 = " << v3 << std::endl;

	v3 = 4 * v1 + v2;
	std::cout << "4 * " << v1 << " + " << v2 << " = " << v3 << std::endl;

	std::cout << "---- vec3 ----" << std::endl;
	linalg::vec4 w1 = { 1,2,3,4 }, w2 = { 5,6,7,8 };
	linalg::vec4 w3 = w1 + w2;
	std::cout << w1 << " + " << w2 << " = " << w3 << std::endl;

	w3 = w1 - w2 * 2;
	std::cout << w1 << " - " << w2 << " * 2 = " << w3 << std::endl;

	w3 = 4 * w1 + w2;
	std::cout << "4 * " << w1 << " + " << w2 << " = " << w3 << std::endl;

	std::cout << "--------------" << std::endl;

	return 0;
}