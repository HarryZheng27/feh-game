#pragma once

class Vector2d {
public:
  Vector2d(float x, float y);
  float x;
  float y;
  Vector2d add(Vector2d other);
  float dot(Vector2d other);
  Vector2d subtract(Vector2d other);
};
