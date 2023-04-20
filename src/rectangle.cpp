#include "geometry/rectangle.hpp"

Rectangle::Rectangle(Properties properties) : Shape(properties){};

uint Rectangle::edges() const { return 4; }
