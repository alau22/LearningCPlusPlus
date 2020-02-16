#include <string>
#include "UPC.h"

using namespace std;

UPC::UPC()
{
  m_value = 0;
}

void UPC::setValue(long long p_value)
{
  if (p_value < 0 || p_value > 999999999999)
  {
    throw string("Invalid value");
  }
  m_value = p_value;
}

long long UPC::getValue()
{
  return m_value;
}
