#include <iostream>

int main()
{
  std::cout << "Ecrivez une lettre" << std::endl;
  char c;
  std::cin >> c;

  if (c >= '0' && c <= '9')
  {
    std::cout << c << std::endl;
  }
  else
  {
    switch (c)
    {
    case 'A':
      std::cout << "10" << std::endl;
      break;
    case 'B':
      std::cout << "11" << std::endl;
      break;
    case 'C':
      std::cout << "12" << std::endl;
      break;
    case 'D':
      std::cout << "13" << std::endl;
      break;
    case 'E':
      std::cout << "14" << std::endl;
      break;
    case 'F':
      std::cout << "15" << std::endl;
      break;
    default:
      std::cout << "Entree invalide" << std::endl;
      return 1;
    }
  }
  return 0;
}
