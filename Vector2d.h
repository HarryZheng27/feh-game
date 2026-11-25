#pragma once
#include <vector>

class Vector2d {
public:
  /**
   * constructor
   * @param x x value of this
   * @param y y value of this
   */
  Vector2d(float x, float y);

  /**
   * default constructor, initializes x and y to 0
   */
  Vector2d();

  /**
   * x value of this, where positive is the right side of the screen
   */
  float x;

  /**
   * y value of this, where positive is the top side of the screen
   */
  float y;

  /**
   * @brief adds a vector to this
   * @param other the vector to be added to this
   * @return the resulting vector
   */
  Vector2d add(Vector2d other) const;

  /**
   * @brief dots this vector with another vector
   * @param other the vector to be dotted with
   * @return the resulting vector
   */
  float dot(Vector2d other) const;

  /**
   * @brief subtracts another vector from this
   * @param other the vector that should be subtracted
   * @return the resulting vector
   */
  Vector2d subtract(Vector2d other) const;

  /**
   * @brief rotates this by radians
   * @param radians radians to rotate by counter-clockwise
   * @return the resulting rotated vector
   */
  Vector2d rotate(float radians) const;

  /**
   * @brief inverts this
   * @return the inverted vector
   */
  Vector2d inverse() const;

  /**
   * gets the magnitude of this
   * @return the magnitude of this
   */
  float getMagnitude() const;

  static Vector2d getAverage(const std::vector<Vector2d> &points);
};
