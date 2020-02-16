#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include <vector>
#include "jeu.h"

using namespace std;

int main()
{
  int nombreJoueurs = 0;
  string mot;
  string motMelange;
  srand(time(0));

  do
  {
    cout << "Bienvenue au mot mystere" << endl;
    do
    {
      cout << "Selectionnez une des options suivantes" << endl;
      cout << "1. 1 joueur" << endl;
      cout << "2. 2 joueurs" << endl;
      cout << "0. Quitter" << endl;
      cin >> nombreJoueurs;
    } while (nombreJoueurs < 0 || nombreJoueurs > 2);

    string ligne;
    vector<string> mots;
    ifstream ouvrirFichier("mot.txt");
    switch (nombreJoueurs)
    {
    case 1:
      if (ouvrirFichier)
      {
        while (getline(ouvrirFichier, ligne))
        {
          mots.push_back(ligne);
        }
        int nombre = rand() % mots.size();
        mot = mots[nombre];
        motMelange = melangerMot(mot);
        jouerJeu(motMelange, mot);
      }
      else
      {
        cout << "Erreur, le fichier n'a pas ete ouvert" << endl;
      }
      break;
    case 2:
      cout << "Entrer le mot mystere" << endl;
      cin >> mot;
      motMelange = melangerMot(mot);
      jouerJeu(motMelange, mot);
      break;
    }
  } while (nombreJoueurs);
  return 0;
}


