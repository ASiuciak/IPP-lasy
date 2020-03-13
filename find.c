#include "find.h"

World findForest (World w, String forestName) {
    if (w == NULL) {return NULL;}
    bool alreadyFound = false;
    World actual = w->next;
    while (actual != NULL && !alreadyFound) {
        if (compare(actual->forest.name, forestName)) {
            alreadyFound = true;
        } else {
            actual = actual->next;
        }
    }
    return actual;
}

Flora findTree (Forest f, String treeName) {
    if (f.trees == NULL) {return NULL;}
    bool alreadyFound = false;
    Flora actual = f.trees->next;
    while (actual != NULL && !alreadyFound) {
        if (compare(actual->tree.name, treeName)) {
            alreadyFound = true;
        } else {
            actual = actual->next;
        }
    }
    return actual;
}

Fauna findAnimal (Tree t, Animal animalName) {
    if (t.animals == NULL) {return NULL;}
    bool alreadyFound = false;
    Fauna actual = t.animals->next;
    while (actual != NULL && !alreadyFound) {
        if (compare(actual->animal, animalName)) {
            alreadyFound = true;
        } else {
            actual = actual->next;
        }
    }
    return actual;
}

