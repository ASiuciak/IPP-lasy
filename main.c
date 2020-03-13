#include "structures.h"
#include "add.h"
#include "print.h"
#include "delete.h"
#include "check.h"

int main() {
    World world = newWorld();
    String f1 = newString();
    append(f1, 'l');
    append(f1, 'a');
    append(f1, 's');
    String f2 = copyString(f1);
    String f3 = copyString(f2);
    append(f1, '1');
    append(f2, '2');
    append(f3, '3');

    String t1 = newString();
    append(t1, 't');
    append(t1, 'r');
    append(t1, 'e');
    append(t1, 'e');
    String t2 = copyString(t1);
    String t3 = copyString(t2);
    append(t1, '1');
    append(t2, '2');
    append(t3, '3');


    addForest(world, f1);
    addForest(world, f2);

    checkForest(world, f2);
    printForests(world);

    addTree(world, f2, t3);
    addTree(world, f3, t3);

    String f4 = copyString(f3);
    append(f4, 'a');
    Animal a1 = newString();
    append(a1, 'a');

    addAnimal(world, f4, t3, a1);
    printAnimals(world, f4, t3);
    printAnimals(world, f2, t2);
    printAnimals(world, f3, t3);

    clearWorld(world);
    free(world);
    return 0;
}