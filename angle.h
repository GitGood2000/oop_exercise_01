#ifndef D_ANGLE_H
#define D_ANGLE_H

#include <iostream>

struct Angle{
private:
  int deg;
  int min;

public:
  void read(std::istream& is);
  void awrite(std::ostream& os) const;
  int mntsonly();

  double deg_to_rad();

  int to360();

  Angle add(const Angle& rhs) const; // const в конце - нельзя изменять переменные именно этой структуры, на остальные (к примеру Angle result)  не влияет, если они сами не константы
  Angle sub(const Angle& rhs) const;
  double div(const Angle& rhs) const;

  double asin();
  double acos();
  double atan();

  int comp(const Angle& rhs) const;
};

#endif
