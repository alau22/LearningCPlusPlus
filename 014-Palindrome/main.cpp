#include <iostream>

bool palindrome(std::string p_word);

int main()
{
  std::cout << "enter a word" << std::endl;
  std::string word;
  std::cin >> word;

  if (palindrome(word))
  {
    std::cout << word << " is a palindrome." << std::endl;
  }
  else
  {
    std::cout << word << " is not a palindrome." << std::endl;
  }
  return 0;
}

bool palindrome(std::string p_word)
{
  int length = p_word.length();
  const char* chars = p_word.c_str();
  for (int position = 0; position <= length / 2; position++)
  {
    if (chars[position]!=chars[length-1-position])
    {
      return false;
    }
  }
  return true;
}
