#ifndef ADD_H
#define ADD_H

#include "structures.h"
#include "find.h"
#include "delete.h"

/* Funkcje dodające elementy świata do struktur nadrzędnych,
 * zachowują porządek leksykograficzny na listach.
 * Zwracają wartości false, jeśli nie udało się dodać obiektu
 * z powodu nieudanej alokacji pamięci, true jeśli
 * udało się dodać obiekt.
 * Nie będą z założenia dodawać próbować dodawać istniejących obiektów.
 */
extern bool addAnimalToTree(Tree t, Animal a);
extern bool addTreeToForest(Forest f, Tree t);
extern bool addForestToWorld(World w, Forest f);



/* Właściwa funkcja odpowiadająca za polecenie ADD las drzewo zwierzę.
 * Zakłada poprawnosć przyjmowanych argumentów.
 * Dodaje las, drzewo w tym lesie i zwierzę na tym drzewie.
 * Jeśli struktury nie zostaną dodane (z powodu istnienia lasu o
 * zadanej nazwie lub nieudanej alokacji pamięci), zwalnia pamięć
 * zaalokowaną na argumenty typu String.
 * TODO zwalnianie
 */
extern void addAnimal
(World w, String forestName, String treeName, Animal animalName);

/* Właściwa funkcja odpowiadająca za polecenie ADD las drzewo.
 * Zakłada poprawnosć przyjmowanych argumentów.
 * Dodaje las i drzewo w tym lesie.
 * Jeśli struktury nie zostaną dodane (z powodu istnienia lasu o
 * zadanej nazwie lub nieudanej alokacji pamięci), zwalnia pamięć
 * zaalokowaną na argumenty typu String.
 * TODO zwalnianie
 */
extern void addTree(World w, String forestName, String treeName);

/* Właściwa funkcja odpowiadająca za polecenie ADD las.
 * Zakłada poprawnosć przyjmowanych argumentów.
 * Dodaje las.
 * Jeśli struktury nie zostaną dodane (z powodu istnienia lasu o
 * zadanej nazwie lub nieudanej alokacji pamięci), zwalnia pamięć
 * zaalokowaną na argumenty typu String.
 * TODO zwalnianie
 */
extern void addForest(World w, String forestName);

#endif //ADD_H
