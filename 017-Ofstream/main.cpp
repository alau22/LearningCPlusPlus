#include <iostream>
#include <string>
#include <fstream>

int main()
{
  std::ofstream file;
  file.open("out.txt");
  std::string commande;
  do
  {
    std::cout << ">> ";
    std::getline(std::cin,commande);
    if (commande.empty())
    {
      break;
    }
    file << commande << std::endl;
  } while (true);

  file.close();
  return 0;
}
