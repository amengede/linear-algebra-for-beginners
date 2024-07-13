#pragma once
#include <intrin.h>
#include <iostream>
namespace linalg {

	//-------------------    Vec2    ---------------------------//
	#pragma region
	struct vec2 {
		union {
			__m128 chunk;
			float elements[4];
		};
	};

	std::ostream& operator<<(std::ostream& os, const vec2& vector) {
		os << "<" 
			<< vector.elements[0] 
			<< ", " << vector.elements[1] 
			<< ">";
		return os;
	}
	
	vec2 operator+(const vec2& u, const vec2& v) {
		return { _mm_add_ps(u.chunk, v.chunk) };
	}

	vec2 operator-(const vec2& u, const vec2& v) {
		return { _mm_sub_ps(u.chunk, v.chunk) };
	}

	vec2 operator*(const float& a, const vec2& v) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}

	vec2 operator*(const vec2& v, const float& a) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}
	#pragma endregion
	//-------------------    Vec3    ---------------------------//
	#pragma region
	struct vec3 {
		union {
			__m128 chunk;
			float elements[4];
		};
	};

	std::ostream& operator<<(std::ostream& os, const vec3& vector) {
		os << "<" 
			<< vector.elements[0] 
			<< ", " << vector.elements[1] 
			<< ", " << vector.elements[2] 
			<< ">";
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
	#pragma endregion
	//-------------------    Vec4    ---------------------------//
	#pragma region
	struct vec4 {
		union {
			__m128 chunk;
			float elements[4];
		};
	};
	
	std::ostream& operator<<(std::ostream& os, const vec4& vector) {
		os << "<" 
			<< vector.elements[0] 
			<< ", " << vector.elements[1] 
			<< ", " << vector.elements[2] 
			<< ", " << vector.elements[3] 
			<< ">";
		return os;
	}

	vec4 operator+(const vec4& u, const vec4& v) {
		return { _mm_add_ps(u.chunk, v.chunk) };
	}

	vec4 operator-(const vec4& u, const vec4& v) {
		return { _mm_sub_ps(u.chunk, v.chunk) };
	}

	vec4 operator*(const float& a, const vec4& v) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}

	vec4 operator*(const vec4& v, const float& a) {
		return { _mm_mul_ps(_mm_set1_ps(a), v.chunk) };
	}
	#pragma endregion
	//----------------------------------------------------------//
}