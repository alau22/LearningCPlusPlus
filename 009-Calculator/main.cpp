#include <iostream>
#include "calc.h"

int main()
{
  char operator1;
  double number1;
  double number2;
  bool stop = false;
  double quotient1;
  do
  {
    std::cout << "Enter an operator or press Q to exit" << std::endl;
    std::cin >> operator1;
    if (operator1 == 'Q')
    {
      stop = true;
    }
    else
    {
      std::cout << "Enter number 1" << std::endl;
      std::cin >> number1;

      std::cout << "Enter number 2" << std::endl;
      std::cin >> number2;

      switch (operator1)
      {
      case'+':
        std::cout << "= " << sum(number1, number2) << std::endl;
        break;
      case'-':
        std::cout << "= " << difference(number1, number2) << std::endl;
        break;
      case'*':
        std::cout << "= " << product(number1, number2) << std::endl;
        break;
      case'/':
        quotient1 = quotient(number1, number2);
        if (quotient1 == 0)
        {
          std::cout << "Error: division by 0" << std::endl;
        }
        else
        {
          std::cout << "= " << quotient1 << std::endl;
        }
        break;
      default:
        std::cout << "Error: invalid operator" << std::endl;
        break;
      }
    }
  } while (!stop);

  return 0;
}
