#include <iostream>
#include <string>
#include "utils.h"

enum Commands
{
  Load = 'O',
  List = 'L',
  Find = 'F',
  Create = 'C',
  Update = 'U',
  Delete = 'D',
  Save = 'S',
  Exit = 'X'
};

int main()
{
  std::string operation;
  bool exit = false;
  char c;
  do
  {
    std::cout << "[O] Load" << std::endl;
    std::cout << "[L] List" << std::endl;
    std::cout << "[F] Find" << std::endl;
    std::cout << "[C] Create" << std::endl;
    std::cout << "[U] Update" << std::endl;
    std::cout << "[D] Delete" << std::endl;
    std::cout << "[S] Save" << std::endl;
    std::cout << "[X] Exit" << std::endl;
    std::getline(std::cin, operation); // comme cin mais sécuritaire pour les espaces
    if (operation.length() != 1)
    {
      std::cout << "Invalid operation: " << operation << std::endl;
      continue;
    }
    c = toupper(operation[0]);
    switch (c)
    {
    case Commands::Create:
      std::cout << "not implemented" << std::endl;
      break;
    case Commands::Delete:
      std::cout << "not implemented" << std::endl;
      break;
    case Commands::Exit:
      exit = true;
      break;
    case Commands::Find:
      std::cout << "not implemented" << std::endl;
      break;
    case Commands::List:
      std::cout << "not implemented" << std::endl;
      break;
    case Commands::Load:
      std::cout << "not implemented" << std::endl;
      break;
    case Commands::Save:
      std::cout << "not implemented" << std::endl;
      break;
    case Commands::Update:
      std::cout << "not implemented" << std::endl;
      break;
    default:
      std::cout << "Operation not existing: " << c << std::endl;
        break;
    }
    std::cout << std::endl;
  } while (!exit);
  return 0;
}
