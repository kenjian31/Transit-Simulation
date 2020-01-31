#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <cmath>
#include "point2.h"
using namespace std;

void Point2::Print(){
   cout<<"(" << x << "," << y << ")"<<endl;
}

double Point2::DistanceBetween(Point2 p2){
  float tempx, tempy, dist;
  tempx = this->x - p2.x;
  tempy = this->y - p2.y;
  dist = sqrt((pow(tempx,2) + pow(tempy,2)));
  return dist;
}

int Point2::Quadrant(){
  int quad;
  if(x > 0 && y >= 0)
  {
    quad = 1;
  }

  else if(x <= 0 && y >0)
  {
    quad = 2;
  }

  else if(x > 0 && y <= 0)
  {
    quad = 4;
  }

  else if(x < 0 && y <= 0)
  {
    quad = 3;
  }

  else
  {
    quad = 0;
  }
  return quad;
}

Point2::Point2(float setx, float sety){
    x = setx;
    y = sety;
  }

Point2::Point2(){
  x = 0;
  y = 0;
}
