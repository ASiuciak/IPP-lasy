#include "check.h"

void checkForest (World w, String forestName) {
    if (findForest(w, forestName) == NULL) {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

void checkTreeInForest (World w, String forestName, String treeName) {
    World f = findForest(w, forestName);
    if (f == NULL) {
        printf("NO\n");
        return;
    }
    Forest forest = f->forest;
    if (findTree(forest, treeName) == NULL) {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

void checkTree(World w, String treeName) {
    if (w == NULL) {
        printf("NO\n");
        return;
    }
    World actual = w->next;
    bool alreadyFound = false;
    while (actual != NULL && !alreadyFound) {
        if (findTree(actual->forest, treeName) != NULL) {
            alreadyFound = true;
        } else {
            actual = actual->next;
        }
    }
    if (alreadyFound) { printf("YES\n");}
    else { printf("NO\n");}
}

void checkAnimalInTreeInForest
(World w, String forestName, String treeName, Animal animalName) {
    World f = findForest(w, forestName);
    if (f == NULL) {
        printf("NO\n");
        return;
    }
    Forest forest = w->forest;
    Flora flora = findTree(forest, treeName);
    if (flora == NULL) {
        printf("NO\n");
        return;
    }
    Tree tree = flora->tree;
    Fauna fauna = findAnimal(tree, animalName);
    if (fauna == NULL) {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

void checkAnimalInForest (World w, String forestName, Animal animalName) {
    World f = findForest(w, forestName);
    if (f == NULL || f->forest.trees == NULL) {
        printf("NO\n");
        return;
    }
    Flora actual = f->forest.trees->next;
    bool alreadyFound = false;
    while (actual != NULL && !alreadyFound) {
        if (findAnimal(actual->tree, animalName) != NULL) {
            alreadyFound = true;
        } else {
            actual = actual->next;
        }
    }
    if (alreadyFound) { printf("YES\n");}
    else { printf("NO\n");}
}

void checkAnimalInTree (World w, String treeName, Animal animalName) {
    if (w == NULL) {
        printf("NO\n");
        return;
    }
    World actual = w->next;
    bool alreadyFound = false;
    while (actual != NULL && !alreadyFound) {
        Flora tree = findTree(actual->forest, treeName);
        if (tree != NULL) {
            if (findAnimal(tree->tree, animalName) != NULL) {
                alreadyFound = true;
            }
        }
        actual = actual->next;
    }
    if (alreadyFound) { printf("YES\n");}
    else { printf("NO\n");}
}

void checkAnimal (World w, Animal animalName) {
    if (w == NULL) {
        printf("NO\n");
        return;
    }
    World actForest = w->next;
    bool alreadyFound = false;

    // Zewnętrzna pętla - po lasach, wewnętrzna - po drzewach
    while (actForest != NULL && !alreadyFound) {
        if (actForest->forest.trees != NULL) {
            Flora actTree = actForest->forest.trees->next;
            while (actTree != NULL && !alreadyFound) {
                if (findAnimal(actTree->tree, animalName) != NULL) {
                    alreadyFound = true;
                } else {
                    actTree = actTree->next;
                }
            }
        }
        actForest = actForest->next;
    }
    if (alreadyFound) { printf("YES\n");}
    else { printf("NO\n");}
}

