#include <iostream>

int main()
{
  const int NbNumbers = 5;
  
  int numbers[NbNumbers] = {};
  int total = 0;

  //int i = 0;
  //while (i < 5)
  //{
  //  std::cout << i<<": "<<numbers[i] << std::endl;
  //  i++;
  //}

  for (int i = 0; i < NbNumbers; i++)
  {
    std::cout << "Enter a number: ";
    std::cin >> numbers[i];
  }
  for (int i = 0; i < NbNumbers; i++)
  {
    total += numbers[i];
  }
  std::cout << "total: " << total << std::endl;
  std::cout << "average: " << total / NbNumbers << std::endl;
  return 0;
}
