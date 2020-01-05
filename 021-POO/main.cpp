#include <iostream>
#include <vector>
#include "animal.h"
#include "dog.h"
#include "pug.h"
#include "bird.h"

int main()
{
  Dog* marcus = new Dog();
  Pug* Copin = new Pug();
  Bird* PetitPit = new Bird();

  //try
  //{
  //  marcus.setLegs(-4);
  //}
  //catch (const char* message)
  //{
  //  std::cout << message << std::endl;
  //}
  //marcus.setLegs(2);

  std::vector<Dog*> dogs;
  dogs.push_back(marcus);
  dogs.push_back(Copin);
  //dogs.push_back(PetitPit); PetitPit est un Bird et Bird n'hérite pas de Dog

  std::vector<Animal*> animals;
  animals.push_back(marcus);
  animals.push_back(Copin);
  animals.push_back(PetitPit); // PetitPit est un Bird et Bird hérite de Animal

  Animal* animal;
  for (auto iterator = animals.begin(); iterator != animals.end(); iterator++)
  {
    animal = (*iterator);
    std::cout << animal->getLegs() << ": " << animal->makeSound() << std::endl;
  }

  delete marcus;
  delete Copin;
  delete PetitPit;

  return 0;
}
