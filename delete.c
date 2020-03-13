#include "delete.h"

void delAnimal(Fauna a) {
    freeString(a->animal);
    free(a);
}

bool deleteAnimalFromTree(Tree t, Animal a) {
    if (t.animals == NULL || t.animals->next == NULL) { return false;}
    bool deleted = false;
    Fauna last = t.animals;
    Fauna actual = t.animals->next;
    Fauna next = actual->next;
    while (actual != NULL && !deleted) {
        if (compare(actual->animal, a)) {
            last->next = next;
            delAnimal(actual);
            deleted = true;
        } else {
            actual = actual->next;
        }
    }
    return deleted;
}

void delFauna(Fauna f) {
    if (f != NULL) {
        delFauna(f->next);
        delAnimal(f);
    }
}

void delTree(Flora t) {
    delFauna(t->tree.animals);
    freeString(t->tree.name);
    free(t);
}

bool deleteTreeFromForest(Forest f, String treeName) {
    if (f.trees == NULL || f.trees->next == NULL) {return false;}
    bool deleted = false;
    Flora last = f.trees;
    Flora actual = last->next;
    Flora next = actual->next;
    while (actual != NULL && !deleted) {
        if (compare(treeName, actual->tree.name)) {
            last->next = next;
            delTree(actual);
            deleted = true;
        } else {
            actual = actual->next;
        }
    }
    return deleted;
}

void delFlora(Flora f) {
    if (f != NULL) {
        delFlora(f->next);
        delTree(f);
    }
}

void delForest(World f) {
    delFlora(f->forest.trees);
    freeString(f->forest.name);
    free(f);
}

bool deleteForestFromWorld(World w, String forestName) {
    if (w == NULL || w->next == NULL) {return false;}
    bool deleted = false;
    World last = w;
    World actual = last->next;
    World next = actual->next;
    while (actual != NULL && !deleted) {
        if (compare(forestName, actual->forest.name)) {
            last->next = next;
            delForest(actual);
            deleted = true;
        } else {
            actual = actual->next;
        }
    }
    return deleted;
}

void delAll(World w) {
    if (w != NULL) {
        delAll(w->next);
        delForest(w);
    }
}



void deleteAnimal
(World w, String forestName, String treeName, Animal animalName) {
    World forest = findForest(w, forestName);
    if (forest == NULL) { return;}
    Forest f = forest->forest;
    Flora tree = findTree(f, treeName);
    if (tree == NULL) { return;}
    Tree t = tree->tree;
    if (deleteAnimalFromTree(t, animalName)) {
        printf("OK\n");
    }
}

void deleteTree(World w, String forestName, String treeName) {
    World forest = findForest(w, forestName);
    if (forest == NULL) { return;}
    Forest f = forest->forest;
    if (deleteTreeFromForest(f, treeName)) {
        printf("OK\n");
    }
}

void deleteForest(World w, String forestName) {
    if (deleteForestFromWorld(w, forestName)) {
        printf("OK\n");
    }
}

void clearWorld(World w) {
    if (w != NULL) {
        delAll(w->next);
        w->next = NULL;
    }
}