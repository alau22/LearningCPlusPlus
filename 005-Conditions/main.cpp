#include <iostream>

int main()
{
  std::cout << "Quel est ton age?" << std::endl;
  unsigned int age;
  std::cin >> age;
  if (age == 0)
  {
    std::cout << "Age invalide" << std::endl;
    return 1;
  }

  if (age > 18)
  {
    std::cout << "Majeur" << std::endl;
  }
  else if (age < 18)
  {
    std::cout << "Mineur" << std::endl;
  }
  else
  {
    std::cout << "felicitation" << std::endl;
  }

  if (age <= 25)
  {
    std::cout << "Je dois te carter" << std::endl;
  }

  if (age >= 100)
  {
    std::cout << "R.I.P." << std::endl;
  }

  if (age != 42)
  {
    std::cout << "Tu n'as pas 42 ans" << std::endl;
  }

  return 0;
}
