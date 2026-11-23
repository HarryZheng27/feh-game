#include "Vector2d.h"

#include <cmath>
#include <complex>

Vector2d::Vector2d(float x, float y) : x(x), y(y) {}

float Vector2d::dot(Vector2d other) { return x * other.x + y * other.y; }

Vector2d Vector2d::add(Vector2d other) {
  return Vector2d(x + other.x, y + other.y);
}

Vector2d Vector2d::subtract(Vector2d other) {
  return Vector2d(x - other.x, y - other.y);
}

Vector2d::Vector2d() : x(0), y(0) {}

Vector2d Vector2d::rotate(float radians) {
  return {x*std::cos(radians) - y*std::sin(radians), x*std::sin(radians) + y*std::cos(radians)};
}
