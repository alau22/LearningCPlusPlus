#include <iostream>
#include <map>
int main()
{
  std::map<int, std::string> numbers;

  numbers[0] = "Zero";
  std::cout << (numbers.empty() ? "yes" : "no") << std::endl;
  std::cout << numbers.size() << std::endl;

  //std::cout<<numbers.at(1)<<std::endl;
  numbers[1] = "One";
  std::cout << numbers.at(1) << std::endl;

  numbers[2] = "Two";
  numbers[3] = "Three";
  for (auto it = numbers.begin(); it != numbers.end(); it++)
  {
    std::cout << (*it).first << "=" << (*it).second << std::endl;
  }

  auto it = numbers.find(0);
  if (it != numbers.end())
  {
    numbers.erase(it);
  }
  for (auto it = numbers.begin(); it != numbers.end(); it++)
  {
    std::cout << (*it).first << "=" << (*it).second << std::endl;
  }

  it = numbers.find(0);
  std::cout << (it!=numbers.end() ? "yes" : "no")<<std::endl;
 
  numbers.clear();
    std::cout << (numbers.empty() ? "yes" : "no") << std::endl;
  std::cout << numbers.size() << std::endl;

  return 0;
}
