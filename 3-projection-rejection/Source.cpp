#include "linalg/linalg.h"
#include <iostream>

int main() {

	std::cout << "---- vec3 ----" << std::endl;
	linalg::vec3 u = { 2, -1, 1 }, v = { 1, 1, 2 };
	std::cout << "the projection of " << u << " onto " << v << " is " << project(u,v) << std::endl;
	std::cout << "the rejection of " << u << " with regard to " << v << " is " << reject(u, v) << std::endl;
	std::cout << "dot(" << reject(u, v) << ", " << v << ") = " << dot(reject(u, v), v) << std::endl;
	std::cout << project(u, v) << " + " << reject(u, v) << " = " << project(u, v) + reject(u, v) << std::endl;
	std::cout << "--------------" << std::endl;

	return 0;
}