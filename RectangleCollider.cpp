#include "RectangleCollider.h"

#include <limits>
#include <math.h>

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
    if (pos.subtract(other->pos).getMagnitude() < size.getMagnitude() + other->size.getMagnitude()) {
        std::array<Line, 4> lines = getLines();
        std::array<Line, 4> linesOther = other->getLines();
        std::vector<Vector2d> points;
        Vector2d point;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                point = findIntercept(linesOther[j], linesOther[i]);
                if (point.x < lines[j].right && point.x > lines[j].left && point.x < lines[j].right && point.x > lines[j].left) {
                    points.push_back(point);
                }
            }
        }
    }

}

Vector2d RectangleCollider::findIntercept(const Line &a, const Line &b) {
    float x = (a.intercept-b.intercept)/(a.slope-b.slope);
    return {x, a.slope * x + a.intercept};
}

std::array<Line, 4> RectangleCollider::getLines() {
    std::array<Vector2d, 4> points = getPoints();
    std::array<Line, 4> lines{};
    for (int i = 0, j = 3; i < 4; j = i++) {
        if (fabs(points[j].x - points[i].x) == 0) {
            lines[i].slope = NULL;
            lines[i].intercept = points[i].x;
        }else {
            lines[i].slope = fabs(points[j].y - points[i].y)/fabs(points[j].x - points[i].x);
        }
        lines[i].left = std::min(points[j].x, points[i].x);
        lines[i].right = std::max(points[j].x, points[i].x);
    }
}

std::array<Vector2d, 4> RectangleCollider::getPoints() {
    std::array<Vector2d, 4> points;
    Vector2d rotated = size.rotate(rotation);
    points[0] = pos.add(rotated);
    rotated = rotated.inverse();
    points[1] = pos.add(rotated);
    rotated = Vector2d(-rotated.x, rotated.y);
    points[2] = pos.add(rotated);
    rotated = rotated.inverse();
    points[3] = pos.add(rotated);
}