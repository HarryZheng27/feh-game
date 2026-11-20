#pragma once

#define GRAVITY_CONSTANT 9.81;

class PhysicsObject {
private:
  float mass;
  float bounciness;
  float friction;
  float posx;
  float posy;
  float velx;
  float vely;

public:
  PhysicsObject(float mass, float bounciness, float friction);
  void applyForceFromOther(float force, PhysicsObject other);
  void tick();
};
