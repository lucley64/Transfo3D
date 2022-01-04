#include "Fenetre.h"
#include "Souris.h"
#include <iostream>
#include <vector>
#include <cmath>
#include "M3202.h"
using namespace std;

Matrice operator*(Matrice a, Matrice b){

  //  [...]

  return Matrice();
}


int main(int argc, char* argv[])
{

  Matrice A(3,3,1);
  Matrice B(3,2,2);
  Matrice C = A * B;

  cout << "Matrice A : " << endl << A;

  cout << "Matrice B : " << endl << B;

  cout << "Matrice C : " << endl << C;

/*
  gtk_init(&argc, &argv);

  Fenetre f("Rotations par produits de matrices", 400, 400);
  Souris s(f);
  Couleur bleu(0,0,255);
  int x,y,b;

  Polygone rect; // le rectangle
  rect.ajouter(Point (100,150));
  rect.ajouter(Point(250,150));
  rect.ajouter(Point(250,250));
  rect.ajouter(Point(100,250));

  // on affiche le rectangle en bleu
  rect.dessiner(f, bleu);

  // attente du clique pour déterminer l'axe de rotation
  while (!s.testeBoutons(x, y, b));

  // on construit la matrice de translation : depuis l'axe vers l'origine
  Matrice translate(3,3,0);
  // [...]

  // on construit la matrice de translation inverse : depuis l'origine vers l'axe
  Matrice remettre ;
  // [...]

  // On définit l'angle de rotation : 20 degrés
  int angle = 20;

  // On construit la matrice de rotation (utiliser M_PI qui est la constante pour PI)
  Matrice rotation(3,3,0);
  //  [...]

  // On efface le rectangle
  rect.dessiner(f, f.couleurFond());

  // On va tourner un à un les points du rectangle
  for (int i = 0 ; i < rect.nbPoints() ; i++){
    // On transforme le point en coordonnées homogènes
    Matrice coordHomogenes(3,1,1);
    // [...]

    // On effectue la rotation
    coordHomogenes = remettre * rotation * translate * coordHomogenes;

    // On modifie le point avec les nouvelles coordonnées
    // [...]
  }

  // On affiche à nouveau le rectangle en bleu
  rect.dessiner(f, bleu);

  // On attend un peu
  f.delai(2000);

  // c'est fini
  f.disparait();

  */

  return 0;
}
