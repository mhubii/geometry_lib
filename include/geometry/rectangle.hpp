#pragma once

#include "geometry/shape.hpp"

/**
 * @brief A rectangle.
 *
 */
class Rectangle : public Shape {
public:
  /**
   * @brief Construct a new Rectangle object.
   *
   * @param properties Shape properties
   */
  Rectangle(Properties properties);

  /**
   * @brief Rectangle edges method.
   *
   * @return uint
   */
  virtual uint edges() const override;
};
