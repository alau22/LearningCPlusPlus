#include <iostream>

int main()
{
  //std::string message = { 'h','e','l','l','o',' ','w','o','r','l','d','\0' }; // Equivalent to:
  std::string message = "hello world";
  std::cout << message << std::endl;
  std::cout << message.substr(6) << std::endl;
  std::cout << message.substr(0, 5) << std::endl;

  std::string name;
  std::cout << "What's your name?" << std::endl;
  std::cin >> name;
  std::cout << "Hi " << name << std::endl;
  std::cout << "length: " << name.length() << std::endl;

  std::string word1 = "Marcus";
  std::string word2 = "Poilus";
  std::string word3 = word1 + " " + word2;
  std::cout << word3 << std::endl;

  std::string gender;
  std::cout << "What's your gender?" << std::endl;
  std::cin >> gender;
  if (gender == "Male" || gender == "Female")
  {
    std::cout << "you're normal" << std::endl;
  }
  else
  {
    std::cout << "you're a special snowflake" << std::endl;
  }


  return 0;
}
