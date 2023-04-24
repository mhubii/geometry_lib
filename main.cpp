#include <iostream>

#include "geometry/circle.hpp"
#include "geometry/rectangle.hpp"

using namespace std;

int main() {
  Circle circle({{1., 1.} /*position*/, "red" /*color*/});
  Rectangle rectangle({{2., 2.} /*position*/, "yellow" /*color*/});

  cout << "Cricle edges: " << circle.edges() << ", color: " << circle.properties().color << endl;
  cout << "Rectangle edges: " << rectangle.edges() << ", color: " << rectangle.properties().color
       << endl;

  return 0;
}