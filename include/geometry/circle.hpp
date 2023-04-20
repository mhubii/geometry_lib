#pragma once

#include "geometry/shape.hpp"

/**
 * @brief A circle.
 *
 */
class Circle : public Shape {
public:
  /**
   * @brief Construct a new Circle object.
   *
   * @param properties Shape properties
   */
  Circle(Properties properties);

  /**
   * @brief Circle edges method.
   *
   * @return uint
   */
  virtual uint edges() const override;
};
