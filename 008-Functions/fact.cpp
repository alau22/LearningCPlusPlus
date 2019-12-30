int sum(int a, int b)
{
  return a + b;
}

unsigned int fibonacci(unsigned int d)
{
  if (d == 0)
  {
    return 0;
  }
  if (d == 1)
  {
    return 1;
  }
  return fibonacci(d - 1) + fibonacci(d - 2);
}