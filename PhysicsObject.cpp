#include "PhysicsObject.h"
PhysicsObject::PhysicsObject(float mass, float bounciness, float friction)
    : mass(mass), bounciness(bounciness), friction(friction) {}
void PhysicsObject::applyForceFromOther(float force, PhysicsObject other) {}
void PhysicsObject::tick() {
  posy += vely;
  posx += velx;
  vely -= GRAVITY_CONSTANT;
}