// Voici par exemple ce que la console devra afficher :
// === Menu ===
// 1. Royal Cheese
// 2. Mc Deluxe
// 3. Mc Bacon
// 4. Big Mac
// Votre choix ?
// Votre mission (si vous l'acceptez) :

// Reproduire ce menu à l'aide de printf.

// Ajouter un scanf pour enregistrer le choix de l'utilisateur dans une variable
// choixMenu.

// Faire un switch pour dire à l'utilisateur "tu as choisi le menu Roya
// Cheese", par exemple.
#include <stdio.h>
int main() {
  int choixMenu;
  printf("=== Menu ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon=\n");
  printf("4. Big Mac\n");
  scanf("%d", &choixMenu);
  switch (choixMenu) {
  case 1:
    printf("tu as choisi  Royal Cheese");
    break;
  case 2:
    printf("tu as choisi Mc Deluxe");
    break;
  case 3:
    printf("tu as choisi Mc Bacon");
    break;
  case 4:
    printf("tu as choisi Big Mac");
    break;
  default:
    printf("error!");
  }
}
