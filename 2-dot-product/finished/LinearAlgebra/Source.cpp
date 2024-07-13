#include "linalg/linalg.h"
#include <iostream>

int main() {

	std::cout << "---- vec3 ----" << std::endl;
	linalg::vec3 u = { 2, -1, 1 }, v = { 1, 1, 2 };
	std::cout << "dot(" << u << ", " << v << ") = " << dot(u,v) << std::endl;

	std::cout << "||" << u << "|| = " << norm(u) << std::endl;
	std::cout << "normalize(" << u << ") = " << normalize(u) << std::endl;


	std::cout << "||" << v << "|| = " << norm(v) << std::endl;
	std::cout << "normalize(" << v << ") = " << normalize(v) << std::endl;

	std::cout << "--------------" << std::endl;

	return 0;
}