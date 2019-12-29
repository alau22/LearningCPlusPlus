#include <iostream>

int main()
{
  bool a = true;
  bool b = true;
  bool c = false;
  bool d = false;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;
  std::cout << "c: " << c << std::endl;
  std::cout << "d: " << d << std::endl;

  std::cout << "!a: " << !a << std::endl;

  std::cout << "a && b: " << (a && b) << std::endl;
  std::cout << "a && c: " << (a && c) << std::endl;
  std::cout << "c && d: " << (c && d) << std::endl;

  std::cout << "a || b: " << (a || b) << std::endl;
  std::cout << "a || c: " << (a || c) << std::endl;
  std::cout << "c || d: " << (c || d) << std::endl;

  std::cout << "a && b && c: " << (a && b && c) << std::endl;
  std::cout << "d || b || c: " << (d || b || c) << std::endl;

  std::cout << "a && !d: " << (a && !d) << std::endl;
  std::cout << "c || !c: " << (c || !c) << std::endl;

  return 0;
}
