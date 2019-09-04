#include "angle.h"
#include <cmath>

//angle(double deg, dobule min): arr{deg, min} {}

void Angle::read(std::istream& is) {
  int deg;
  int min;
  is >> deg >> min;
  angle = deg * 60 + min;
}

void Angle::awrite(std::ostream& os) const {
  os << angle / 60 << ' ' << angle % 60 << '\n';
}

void Angle::dwrite(std::ostream& os) const{
  os << dblVals << '\n';
}

void Angle::cwrite(std::ostream& os) const{
  os << comp << '\n';
}

double Angle::deg_to_rad(){
  dblVals = (double)angle / 10800 * M_PI; //M_PI - Пи в cmath
  //(double)angle - перевод angle (заданый в int) из int в double 
  return dblVals;
}

double Angle::to360(){
  return angle % 21600;
}

Angle Angle::sum(const Angle& rhs) const {
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
  dblVals = sin((dobule)angle/60);
  return dblVals;
}

double Angle::acos() {
  dblVals = con((double)angle/60);
  return dblVals;
}

double Angle::atan(){
  dblVals = tan((double)angle/60);
  return dblVals;
}

Angle Angle::comp(const Angle& rhs) const {
  if (angle > rhs.angle){
    comp = "A > B \n";
  } else {
    comp = << "A < B \n";
  }
  return result;
}
