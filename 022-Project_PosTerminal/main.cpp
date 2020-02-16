#include <iostream>
#include <string>
#include <map>
#include "create.h"
#include "product.h"

using namespace std;

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
  string operation;
  bool exit = false;
  char c;
  map<long long, Product> products;
  do
  {
    cout << "[O] Load" << endl;
    cout << "[L] List" << endl;
    cout << "[F] Find" << endl;
    cout << "[C] Create" << endl;
    cout << "[U] Update" << endl;
    cout << "[D] Delete" << endl;
    cout << "[S] Save" << endl;
    cout << "[X] Exit" << endl;
    getline(cin, operation); // comme cin mais sécuritaire pour les espaces
    if (operation.length() != 1)
    {
      cout << "Invalid operation: " << operation << endl;
      continue;
    }
    c = toupper(operation[0]);
    switch (c)
    {
    case Commands::Create:
      create(products);
      break;
    case Commands::Delete:
      cout << "not implemented" << endl;
      break;
    case Commands::Exit:
      exit = true;
      break;
    case Commands::Find:
      cout << "not implemented" << endl;
      break;
    case Commands::List:
      cout << "not implemented" << endl;
      break;
    case Commands::Load:
      cout << "not implemented" << endl;
      break;
    case Commands::Save:
      cout << "not implemented" << endl;
      break;
    case Commands::Update:
      cout << "not implemented" << endl;
      break;
    default:
      cout << "Operation not existing: " << c << endl;
      break;
    }
    cout << endl;
  } while (!exit);

  return 0;
}
