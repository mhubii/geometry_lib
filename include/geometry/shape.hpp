#pragma once

#include <array>
#include <iostream>
#include <string>

/**
 * @brief A shape.
 *
 */
class Shape {
public:
  /**
   * @brief Shape properties.
   *
   */
  struct Properties {
    std::array<double, 2> position; /**< The shape's position.*/
    std::string color;              /**< The shape's color.*/
  };

  Shape() = delete;

  /**
   * @brief Construct a new Shape object.
   *
   * @param Properties Shape properties
   */
  Shape(Properties properties) : properties_(properties){};

  /**
   * @brief Shape's number of edges.
   *
   * @return uint
   */
  virtual uint edges() const = 0;

  /**
   * @brief Getter for #properties_.
   *
   * @return const Properties&
   */
  inline const Properties &properties() const { return properties_; };

protected:
  Properties properties_; /**< Shape properties.*/
};
