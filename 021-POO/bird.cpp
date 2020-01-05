#include "bird.h"

Bird::Bird()
{
  setLegs(2);
}

std::string Bird::makeSound() const
{
  return "pit pit";
}
