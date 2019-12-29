#include <iostream>

int main()
{
  int i = 1;
  while (i <= 10)
  {
    std::cout << i << std::endl;
    i++;
  }

  char c;
  do
  {
    std::cout << "enter a letter" << std::endl;
    std::cin >> c;
  } while (c!='x');

  return 0;
}
