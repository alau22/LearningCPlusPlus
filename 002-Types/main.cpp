#include <iostream>

int main()
{
  std::cout << "char: " << sizeof(char) << " byte(s)" << std::endl;
  std::cout << "short int: " << sizeof(short int) << " byte(s)" << std::endl;
  std::cout << "int: " << sizeof(int) << " byte(s)" << std::endl;
  std::cout << "long long int: " << sizeof(long long int) << " byte(s)" << std::endl;

  std::cout << "unsigned char: " << sizeof(unsigned char) << " byte(s)" << std::endl;
  std::cout << "unsigned short int: " << sizeof(unsigned short int) << " byte(s)" << std::endl;
  std::cout << "unsigned int: " << sizeof(unsigned int) << " byte(s)" << std::endl;
  std::cout << "unsigned long long int: " << sizeof(unsigned long long int) << " byte(s)" << std::endl;
  
  std::cout << "float: " << sizeof(float) << " byte(s)" << std::endl;
  std::cout << "double: " << sizeof(double) << " byte(s)" << std::endl;

  std::cout << "bool: " << sizeof(bool) << " byte(s)" << std::endl;

  return 0;
}
