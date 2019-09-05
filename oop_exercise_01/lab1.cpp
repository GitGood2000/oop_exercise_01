#include <iostream>

#include "angle.cpp"

int main(){
  Angle a;
  Angle b;
  a.read(std::cin);
  b.read(std::cin);
  std::cout << "RADS: \n";
  a.deg_to_rad().dwrite(std::cout);
  std::cout << "0-360 DEG:";
  a.to360().awrite(std::cout);
  std::cout << "SUM: \n";
  a.add(b).awrite(std::cout);
  std::cout << "SUB:\n";
  a.sub(b).awrite(std::cout);
  std::cout << "DIVIDE:\n";
  a.div(b).dwrite(std::cout);
  std::cout << "SIN:\n";
  a.asin().dwrite(std::cout);
  std::cout << "COS: \n";
  a.acos().dwrite(std::cout);
  std::cout << "TAN: \n";
  a.atan().dwrite(std::cout);
  a.comp(b).cwrite(std::cout);
}
