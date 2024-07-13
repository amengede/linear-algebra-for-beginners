#pragma once
#include <intrin.h>
#include <math.h>
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

	float dot(const vec2& u, const vec2& v) {
		return u.elements[0] * v.elements[0] \
			+ u.elements[1] * v.elements[1];
	}

	float norm(const vec2& u) {
		return sqrtf(dot(u, u));
	}

	vec2 normalize(const vec2& u) {
		return (1.0f / sqrtf(dot(u, u))) * u;
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

	float dot(const vec3& u, const vec3& v) {
		return u.elements[0] * v.elements[0] \
			+ u.elements[1] * v.elements[1]
			+ u.elements[2] * v.elements[2];
	}

	float norm(const vec3& u) {
		return sqrtf(dot(u, u));
	}

	vec3 normalize(const vec3& u) {
		return (1.0f / sqrtf(dot(u, u))) * u;
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

	float dot(const vec4& u, const vec4& v) {
		return u.elements[0] * v.elements[0] \
			+ u.elements[1] * v.elements[1]
			+ u.elements[2] * v.elements[2]
			+ u.elements[3] * v.elements[3];
	}

	float norm(const vec4& u) {
		return sqrtf(dot(u, u));
	}

	vec4 normalize(const vec4& u) {
		return (1.0f / sqrtf(dot(u, u))) * u;
	}
	#pragma endregion
	//----------------------------------------------------------//
}