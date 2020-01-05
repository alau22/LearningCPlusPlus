#include "animal.h"

Animal::Animal()
{
  setLegs(0);
}

int Animal::getLegs()
{
  return m_legs;
}

void Animal::setLegs(int p_legs)
{
  if (p_legs < 0)
  {
    throw "error: legs must be positive";
  }
  m_legs = p_legs;
}
