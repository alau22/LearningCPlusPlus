#include <iostream>


void makedouble(int n)
{
  n *=2;
}
void makedouble(int* n)
{
  *n *= 2;
}
int main()
{
  int a = 10;
  makedouble(a);
  std::cout << a << std::endl;
  int* p = &a;
  std::cout << p << std::endl;
  makedouble(p);
  std::cout << a << std::endl;
  *p+=5;
  std::cout << a << std::endl;
  int numbers[] = { 10, 20, 30, 40, 50 };
  p = &numbers[0];
  for (int i = 0; i < 5; i++)
  {
    std::cout << p + i << "=" << *(p + i) << std::endl;
  }
  return 0;
}


