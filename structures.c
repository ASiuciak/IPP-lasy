#include "structures.h"

Animal newAnimal(String name) {
    return name;
}

Fauna newFauna() {
    Fauna n = malloc(sizeof(Animal));
    if (n == NULL) { return NULL;}
    n->next = NULL;
    n->animal = NULL;
    return n;
}

Tree newTree(String name) {
    Tree t;
    t.name = name;
    t.animals = newFauna();
    return t;
}

Flora newFlora() {
    Flora n = malloc(sizeof(struct listOfTrees));
    if (n == NULL) { return NULL;}
    n->next = NULL;
    n->tree = newTree(NULL);
    return n;
}

Forest newForest(String name) {
    Forest f;
    f.name = name;
    f.trees = newFlora();
    return f;
}

World newWorld() {
    World n = malloc(sizeof(struct listOfForests));
    if (n == NULL) { return NULL;}
    n->next = NULL;
    n->forest = newForest(NULL);
    return n;
}

