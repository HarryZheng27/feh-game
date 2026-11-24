#include "Vector2d.h"

#include <cmath>
#include <complex>

Vector2d::Vector2d(const float x, const float y) : x(x), y(y) {}

float Vector2d::dot(const Vector2d other) const { return x * other.x + y * other.y; }

Vector2d Vector2d::add(const Vector2d other) const {
  return {x + other.x, y + other.y};
}

Vector2d Vector2d::subtract(const Vector2d other) const {
  return {x - other.x, y - other.y};
}

Vector2d::Vector2d() : x(0), y(0) {}

Vector2d Vector2d::rotate(const float radians) const {
  return {x*std::cos(radians) - y*std::sin(radians), x*std::sin(radians) + y*std::cos(radians)};
}

Vector2d Vector2d::inverse() const {
  return {-x, -y};
}

float Vector2d::getMagnitude() const {
  return std::sqrt(x*x + y*y);
}
