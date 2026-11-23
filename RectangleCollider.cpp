#include "RectangleCollider.h"

#include <utility>

#include "Vector2d.h"


RectangleCollider::RectangleCollider(Vector2d size, Vector2d pos, PhysicsObject *physics_object, float bounciness, float friction, float rotation) : size(size),
                                                                                                                                                     pos(pos), rotation(rotation) {
    this->physicsObject = physics_object;
    this->bounciness = bounciness;
    this->friction = friction;
    RectangleCollider::colliders.push_back(this);
}

void RectangleCollider::tick() {
    for (RectangleCollider* collider : colliders) {
        if (collider != this) {

        }
    }
}

Vector2d RectangleCollider::checkCollision(RectangleCollider *other) {
    
}

std::array<Line, 4> RectangleCollider::getLines() {
    for (int i = 0; i < 4; i++) {

    }
}

std::array<Vector2d, 4> RectangleCollider::getPoints() {
    std::array<Vector2d, 4> points;
    Vector2d rotated = size.rotate(rotation);
    points[0] = pos.add(rotated);

    points[1] = pos.add(rotated);

    points[2] = pos.add(rotated);

    points[3] = pos.add(rotated);

}