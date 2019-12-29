#include <iostream>

int main()
{
  int a; // Je d�clare une variable enti�re nomm�e "a" sans valeur initiale (tiroir vide).
  a = 10; // J'affecte la valeur 10 � ma variable "a" (ouvrir le tiroir, d�poser 10, fermer le tiroir).
  std::cout << "a: " << a << std::endl;

  int b = a + 5;
  std::cout << "b: " << b << std::endl;

  int c = b;
  std::cout << "c: " << c << std::endl;

  // Les deux lignes suivantes sont �quivalentes.
  c = c + 2;
  std::cout << "c: " << c << std::endl;
  c += 2;
  std::cout << "c: " << c << std::endl;

  int d = 21;
  std::cout << "d: " << d << std::endl;
  d++; // �quivalent : d = d + 1 // c += 1
  std::cout << "d: " << d << std::endl;
  d--; // �quivalent : d = d - 1 // c -= 1
  std::cout << "d: " << d << std::endl;

  return 0;
}
