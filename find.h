#ifndef FIND_H
#define FIND_H

#include "structures.h"
#include "stringBuilder.h"

/* Wyszukuje las o podanej nazwie na świecie.
 * Zwraca wskaźnik na strukturę World przechowującą dany las,
 * jeśli taki istnieje, NULL w przeciwnym wypadku.
 */
extern World findForest (World w, String forestName);

/* Wyszukuje drzewo o podanej nazwie w lesie.
 * Zwraca wskaźnik na strukturę Flora przechowującą dane drzewo,
 * jeśli takie istnieje, NULL w przeciwnym wypadku.
 */
extern Flora findTree (Forest f, String treeName);

/* Wyszukuje zwierzę o podanej nazwie na drzewie.
 * Zwraca wskaźnik na strukturę Fauna przechowującą dane zwierzę,
 * jeśli takie istnieje, NULL w przeciwnym wypadku.
 */
extern Fauna findAnimal (Tree t, Animal animalName);

#endif //FIND_H
