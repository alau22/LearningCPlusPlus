#include <iostream>
#include <vector>

int main()
{
  //int numbers[] = { 10,20,30,40,50 };
  std::vector<int> numbers = { 10,20,30,40,50 };

  std::cout << numbers.at(1) << std::endl;
  //std::cout << numbers.at(5) << std::endl;

  std::cout << numbers.front() << std::endl;
  std::cout << numbers.back() << std::endl;

  std::cout << (numbers.empty() ? "yes" : "no") << std::endl;
  std::cout << numbers.size() << std::endl;
  numbers.clear();
  std::cout << (numbers.empty() ? "yes" : "no") << std::endl;
  std::cout << numbers.size() << std::endl;

  numbers.push_back(18);
  numbers.push_back(42);
  numbers.push_back(37);
  numbers.push_back(0);
  numbers.push_back(76);
  numbers.push_back(-1);
  numbers.pop_back();
  std::vector<int>::iterator it;
  for (it = numbers.begin();it != numbers.end();it++)
  {
    std::cout << *it << std::endl;
  }

  it = numbers.begin();
  it = it + 2;
  numbers.insert(it, 99);
  for (it = numbers.begin();it != numbers.end();it++)
  {
    std::cout << *it << std::endl;
  }

  it = numbers.begin();
  it = it + 4;
  numbers.erase(it);
  for (it = numbers.begin();it != numbers.end();it++)
  {
    std::cout << *it << std::endl;
  }

  return 0;
}
