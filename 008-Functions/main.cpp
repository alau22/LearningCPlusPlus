#include <iostream>
#include "fact.h"

void message()
{
  std::cout << "Hello world" << std::endl;
}

int main()
{
  message();
  int c = sum(8, 2);
  std::cout << "c:" << c << std::endl;

  std::cout << "Entrez un entier positif" << std::endl;
  unsigned int nombre;
  std::cin >> nombre;
  std::cout << "fibonacci: " << fibonacci (nombre) << std::endl;
  return 0;
}

