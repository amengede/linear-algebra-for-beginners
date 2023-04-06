#pragma once
#include <iostream>
#include <intrin.h>
namespace linalg {

	struct vec2 {
		union {
			__m128 chunk;
			float elements[4];
		};
	};

	std::ostream& operator<<(std::ostream& os, const vec2& vector) {
		os << "<" << vector.elements[0] << ", " << vector.elements[1] << ">";
		return os;
	}

	vec2 operator+(const vec2& u, const vec2& v) {
		return { _mm_add_ps(u.chunk, v.chunk) };
	}

	vec2 operator-(const vec2& u, const vec2& v) {
		return { _mm_sub_ps(u.chunk, v.chunk) };
	}

	vec2 operator*(const float& a, const vec2& v) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk)};
	}

	vec2 operator*(const vec2& v, const float& a) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}

	struct vec3 {
		union {
			__m128 chunk;
			float elements[4];
		};
	};

	std::ostream& operator<<(std::ostream& os, const vec3& vector) {
		os << "<" << vector.elements[0] << ", " << vector.elements[1] << vector.elements[2] << ">";
		return os;
	}

	vec3 operator+(const vec3& u, const vec3& v) {
		return { _mm_add_ps(u.chunk, v.chunk) };
	}

	vec3 operator-(const vec3& u, const vec3& v) {
		return { _mm_sub_ps(u.chunk, v.chunk) };
	}

	vec3 operator*(const float& a, const vec3& v) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}

	vec3 operator*(const vec3& v, const float& a) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}
}