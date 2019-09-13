#include "angle.h"
#include <cmath>

#include <iostream>

//angle(double deg, double min): arr{deg, min} {}

void Angle::read(std::istream& is) {
  int deg;
  int min;
  is >> deg >> min;
  if (deg < 0) {
    angle = deg * 60 - min;
  } else {
    angle = deg * 60 + min;
  }
}

void Angle::awrite(std::ostream& os) const {
  os << angle / 60 << ' ' << abs(angle % 60) << '\n';
}

void Angle::dwrite(std::ostream& os) const{
  os << dblVals << '\n';
}

int Angle::mntsonly(){
  if (angle < 0){
    return 60 - abs(angle % 60);
  } else {
    return (angle % 60);
  }
}

double Angle::deg_to_rad(){
  dblVals = (double)angle / 10800 * M_PI; //M_PI - Пи в cmath
  //(double)angle - перевод angle (заданый в int) из int в double 
  return dblVals;
}

int Angle::to360(){
  if (angle < 0) {  
    return 360 - abs((angle % 21600) / 60);
  } else {
    return (angle % 21600) / 60;
  }
}

Angle Angle::add(const Angle& rhs) const {
  Angle result;
  result.angle = angle + rhs.angle;
  return result;
}

Angle Angle::sub(const Angle& rhs) const {
  Angle result;
  result.angle = angle - rhs.angle;
  return result;
}

Angle Angle::div (const Angle& rhs) const {
  Angle result;
  result.dblVals = (double)angle / rhs.angle;
  return result;
}

double Angle::asin() {
  dblVals = sin((double)angle/60);
  return dblVals;
}

double Angle::acos() {
  dblVals = cos((double)angle/60);
  return dblVals;
}

double Angle::atan(){
  dblVals = tan((double)angle/60);
  return dblVals;
}

int Angle::comp(const Angle& rhs) const {
  int result = 0;
  if (angle > rhs.angle)
    result = 1;
  else if (angle < rhs.angle)
    result = -1;

  return result;
}
