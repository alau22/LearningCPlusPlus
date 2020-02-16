#include "jeu.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

string melangerMot(string mot)
{
  string motMelange;
  srand(time(0));

  while (mot.size() != 0)
  {
    int position = rand() % mot.size();
    motMelange += mot[position];
    mot.erase(position, 1);
  }

  return motMelange;
}

void jouerJeu(string motMelange, string mot)
{
  string motTentative;
  do
  {
    cout << motMelange << endl;
    cout << "Quel est le mot mystere?" << endl;
    cin >> motTentative;
    if (motTentative == mot)
    {
      cout << "Bravo! Vous avez devine le mot mystere" << endl;
    }
    else
    {
      cout << "Non, ce n'est pas le mot mystere" << endl;
    }
  } while (motTentative != mot);
}
