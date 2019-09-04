#ifndef D_ANGLE_H
#define D_ANGLE_H

struct Angle{
  int angle;
  double dblVals;
  char comp[];

  void read(std::istream& is);
  void awrite(std::ostream& os) const;
  void dwrite(std::ostream& os) const;
  void cwrite(std::ostream& os) const;

  double deg_to_rad();

  double to360();

  Angle add(const Angle& rhs) const; // const в конце - нельзя изменять переменные именно этой структуры, на остальные (к примеру Angle result)  не влияет, если они сами не константы
  Angle sub(const Angle& rhs) const;
  Angle div(const Angle& rhs) const;

  double asin();
  double acos();
  dobule atan();

  Angle comp(const Angle& rhs) const;
}

#endif
