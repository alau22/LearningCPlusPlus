#include <iostream>

double quotient(double a, double b)
{
  return a / b;
}
double quotient_s(double a, double b)
{
  if (b == 0)
  {
    throw "division by zero";
  }
  return a / b;
}
int main()
{
  double a = 3;
  double b = 0;
  std::cout << quotient(a, b) << std::endl;
  try 
  {
    std::cout << quotient_s(a, b) << std::endl;
  }
  catch (const char* message)
  {
    std::cout << "error: " << message << std::endl;
  }
  return 0;
}


