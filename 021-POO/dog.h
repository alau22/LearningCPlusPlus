#pragma once
#include "animal.h"

class Dog : public Animal
{
public:
  Dog();
  std::string makeSound() const;
};
