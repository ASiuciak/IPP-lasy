#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <stdlib.h>
#include "stringBuilder.h"

// Zwierzę będzie reprezentował alias na typ String.
typedef String Animal;

// Struktura reprezentująca listę zwierząt
struct listOfAnimals {
    Animal animal;
    struct listOfAnimals *next;
};
typedef struct listOfAnimals *Fauna;

// Struktura reprezentująca drzewo (drzewo = nazwa + zwierzęta).
struct Tree {
    String name;
    Fauna animals;
};
typedef struct Tree Tree;

// Struktura reprezentująca listę drzew.
struct listOfTrees {
    Tree tree;
    struct listOfTrees *next;
};
typedef struct listOfTrees *Flora;

// Struktura reprezentująca las (las = nazwa + drzewa).
struct Forest {
    String name;
    Flora trees;
};
typedef struct Forest Forest;

// Struktura reprezentująca świat (zbiór lasów).
struct listOfForests {
    Forest forest;
    struct listOfForests *next;
};
typedef struct listOfForests *World;

/* Funkcje tworzące nowe obiekty zadanych klas.
 * (wszystkie listy będą tworzone z atrapami)
 */
extern Animal newAnimal(String name);
extern Fauna newFauna();
extern Tree newTree(String name);
extern Flora newFlora();
extern Forest newForest(String name);
extern World newWorld();

#endif //STRUCTURES_H
