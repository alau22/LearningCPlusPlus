#pragma once
#include <string>
class Animal //classe abstraite ne peut pas être instanciée
{
public:
  Animal();

  int getLegs();

  virtual std::string makeSound() const = 0; //abstraite car = 0
protected:
  void setLegs(int p_legs);
private:
  int m_legs;
};
