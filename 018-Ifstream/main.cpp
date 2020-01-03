#include <iostream>
#include <string>
#include <fstream>

int main()
{
  std::ifstream file;
  file.open("out.txt");
  if (!file.is_open())
  {
    std::cout << "Le fichier n'est pas ouvert" << std::endl;
    return 1;
  }
  std::string line;
  while (std::getline(file, line))
  {
    std::cout << line << std::endl;
  }
  file.close();
  return 0;
}

