#include <iostream>

enum Color
{
  Black = 0,
  Blue = 1,
  Green = 2,
  Red = 3,
  Yellow = 4
};

int main()
{
  Color couleurPref;
  couleurPref = Red;
  std::cout << "couleur preferee: " << couleurPref << std::endl;
  if (couleurPref == Blue || couleurPref == Green)
  {
    std::cout << "couleur froide" << std::endl;
  }
  else if (couleurPref == Red || couleurPref == Yellow)
  {
    std::cout << "couleur chaude" << std::endl;
  }
  return 0;
}
