#include <iostream>

int main()
{
  char message[] = { 'h','e','l','l','o',' ','w','o','r','l','d','\0' };
  std::cout << message << std::endl;

  char name[10];
  std::cout << "What's your name?" << std::endl;
  std::cin.getline(name, 10);
  std::cout << "Hi " << name << std::endl;
  std::cout << "length: " << strlen(name) << std::endl;

  return 0;
}
