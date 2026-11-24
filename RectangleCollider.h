#pragma once
#include <array>
#include <vector>

#include "PhysicsObject.h"
#include "Vector2d.h"

struct Line {
  float slope, intercept, left, right;
};

class RectangleCollider {
private:
  Vector2d size;
  Vector2d pos;
  float rotation{};
  PhysicsObject *physicsObject;
  float bounciness, friction;
  static std::vector<RectangleCollider *> colliders;
  Vector2d checkCollision(RectangleCollider *other);

  std::array<Vector2d, 4> getPoints();

  static Vector2d findIntercept(const Line &a, const Line &b);

public:
  /**
   * Constructor
   * @param size Vector2d containing the width and height of the collider
   * @param pos Vector2d containing the position of the center of the collider
   * @param physics_object PhysicObject to bind to, use NULL if none
   * @param bounciness How much of the perpendicular momentum is preserved on collision, 0 to 1
   * @param friction Inverse of how much of the parallel momentum is preserved on collision
   * @param rotation Starting rotation of the collider, in radians
   */
  RectangleCollider(Vector2d size, Vector2d pos, PhysicsObject *physics_object, float bounciness, float friction, float rotation);

  /**
   * tick the collider
   */
  void tick();

  std::array<Line, 4> getLines();

};

