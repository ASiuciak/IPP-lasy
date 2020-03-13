#include "add.h"
#include <string.h>

bool addAnimalToTree(Tree t, Animal a) {
    Fauna actual = t.animals;
    if (actual == NULL) { return false;}
    Fauna next = t.animals->next;

    // Szukamy miejsca do wstawienia zgodnego z porządkiem leksykograficznym.
    while (next != NULL && strcmp(a->word, next->animal->word) >= 0) {
        actual = next;
        next = next->next;
    }

    Fauna n = newFauna();
    if (n == NULL) { return false;}
    n->animal = a;
    n->next = next;
    actual->next = n;
    return true;
}

bool addTreeToForest(Forest f, Tree t) {
    Flora actual = f.trees;
    if (actual == NULL) { return false;}
    Flora next = actual->next;

    // Szukamy miejsca do wstawienia zgodnego z porządkiem leksykograficznym.
    while (next != NULL && strcmp(t.name->word, next->tree.name->word) >= 0) {
        actual = next;
        next = next->next;
    }

    Flora n = newFlora();
    if (n == NULL) { return false;}
    n->tree = t;
    n->next = next;
    actual->next = n;
    return true;
}

bool addForestToWorld(World w, Forest f) {
    World actual = w;
    if (actual == NULL) { return false;}
    World next = actual->next;

    // Szukamy miejsca do wstawienia zgodnego z porządkiem leksykograficznym.
    while (next != NULL && strcmp(f.name->word, next->forest.name->word) >= 0) {
        actual = next;
        next = next->next;
    }

    World n = newWorld();
    if (n == NULL) { return false;}
    n->forest = f;
    n->next = next;
    actual->next = n;
    return true;
}

void addAnimal
(World w, String forestName, String treeName, Animal animalName) {
    if (w == NULL) {
        return;
    }
    World forest = findForest(w, forestName);

    // Las o takiej nazwie już istnieje.
    if (forest != NULL) {
        return;
    }

    // Nie udało się dodać lasu.
    if (!addForestToWorld(w, newForest(forestName))) {
        return;
    }

    forest = findForest(w, forestName);
    Forest f = forest->forest;

    // Nie udało się dodać drzewa.
    if (!addTreeToForest(f, newTree(treeName))) {
        deleteForestFromWorld(w, f.name);
        return;
    }

    Flora tree = findTree(f, treeName);
    Tree t = tree->tree;

    // Nie udało się dodać zwierzęcia.
    if (!addAnimalToTree(t, newAnimal(animalName))) {
        deleteForestFromWorld(w, f.name);
        return;
    }

    // Wszystko się udało.
    printf("%s\n", "OK");
}

void addTree(World w, String forestName, String treeName) {
    if (w == NULL) {
        return;
    }
    World forest = findForest(w, forestName);

    // Las o takiej nazwie już istnieje.
    if (forest != NULL) {
        return;
    }

    // Nie udało się dodać lasu.
    if (!addForestToWorld(w, newForest(forestName))) {
        return;
    }

    forest = findForest(w, forestName);
    Forest f = forest->forest;

    // Nie udało się dodać drzewa.
    if (!addTreeToForest(f, newTree(treeName))) {
        deleteForestFromWorld(w, f.name);
        return;
    }

    printf("OK\n");
}

void addForest(World w, String forestName) {
    if (w == NULL) {
        return;
    }

    World forest = findForest(w, forestName);

    // Las o takiej nazwie już istnieje.
    if (forest != NULL) {
        return;
    }

    // Nie udało się dodać lasu.
    if (!addForestToWorld(w, newForest(forestName))) {
        return;
    }

    printf("OK\n");
}

