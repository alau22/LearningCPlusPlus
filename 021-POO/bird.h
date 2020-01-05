#pragma once
#include "animal.h"

class Bird : public Animal
{
public:
  Bird();
  std::string makeSound() const;
};
