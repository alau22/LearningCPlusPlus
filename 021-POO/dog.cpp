#include "dog.h"

Dog::Dog()
{
  setLegs(4);
}

std::string Dog::makeSound() const
{
  return "Wouf";
}
