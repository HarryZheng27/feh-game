#include "PhysicsObject.h"
PhysicsObject::PhysicsObject(float mass, float bounciness, float friction)
    : mass(mass), bounciness(bounciness), friction(friction) {
    velX = 0;
    velY = 0;
    posX = 0;
    posY = 0;
}
void PhysicsObject::applyForceFromOther(float force, PhysicsObject other) {}
void PhysicsObject::tick() {
  posY += velY;
  posX += velX;
  velY -= GRAVITY_CONSTANT;
}