#include "print.h"

void printAnimals(World w, String forestName, String treeName) {
    World forest = findForest(w, forestName);
    if (forest == NULL) { return;}
    Forest f = forest->forest;
    Flora tree = findTree(f, treeName);
    if (tree == NULL) { return;}
    Tree t = tree->tree;
    if (t.animals == NULL) { return;}
    Fauna actual = t.animals->next;
    while (actual != NULL) {
        printString(actual->animal);
        actual = actual->next;
    }
}

void printTrees(World w, String forestName) {
    World forest = findForest(w, forestName);
    if (forest == NULL) { return;}
    Forest f = forest->forest;
    if (f.trees == NULL) { return;}
    Flora actual = f.trees->next;
    while (actual != NULL) {
        printString(actual->tree.name);
        actual = actual->next;
    }
}

void printForests(World w) {
    if (w == NULL) { return;}
    World actual = w->next;
    while (actual != NULL) {
        printString(actual->forest.name);
        actual = actual->next;
    }
}

