#pragma once

#define GRAVITY_CONSTANT 9.81;// some arbitrary value, POSITIVE!

class PhysicsObject {
private:
  bool dynamic;
  float mass;
  float posX;
  float posY;
  float velX;
  float velY;

public:
  /**
   * constructor
   * @param mass mass of the object
   * @param dynamic whether the object should move or not
   */
  PhysicsObject(float mass, bool dynamic);

  /**
   * apply a force to this from another object
   * @param force force applied to this
   * @param other the other object, this is for determining the direction at which the force is coming from
   */
  void applyForceFromOther(float force, PhysicsObject other);

  /**
   * tick this
   */
  void tick();
};
