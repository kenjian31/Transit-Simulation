#include <string>

#ifndef POINT2_H
#define POINT2_H

class Point2 {
private:
  float x;
  float y;

public:
  double DistanceBetween(Point2);
  int Quadrant();
  void Print();
  Point2(float,float);
  Point2();

};
#endif
