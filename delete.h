#ifndef DELETE_H
#define DELETE_H

#include "structures.h"
#include "stringBuilder.h"
#include "find.h"

// Usuwa pojedynczy węzeł typu Fauna (zwierzę) wraz z zawartością.
extern void delAnimal(Fauna a);

// Usuwa dane zwierzę z danego drzewa.
extern bool deleteAnimalFromTree(Tree t, Animal a);

// Usuwa całą listę zwierząt rozpoczynającą się danym węzłem.
extern void delFauna(Fauna f);

// Usuwa pojedynczy węzeł typu Flora (drzewo) wraz z zawartością.
extern void delTree(Flora t);

// Usuwa dane drzewo z danego lasu.
extern bool deleteTreeFromForest(Forest f, String treeName);

// Usuwa całą listę drzew rozpoczynającą się danym węzłem.
extern void delFlora(Flora f);

// Usuwa pojedynczy węzeł typu World (las) wraz z zawartością.
extern void delForest(World f);

// Usuwa dany las z danego świata.
extern bool deleteForestFromWorld(World w, String forestName);

// Usuwa całą listę lasów rozpoczynającą się danym węzłem.
extern void delAll(World w);



/* Usuwa dane zwierzę z danego drzewa w danym lesie.
 * Odpowiada za polecenie DEL las drzewo zwierzę.
 * Zwalnia pamięć zaalokowaną na nazwę usuwanego zwierzęcia oraz
 * przyjmowane argumenty typu String.
 * todo zwalnianie
 */
extern void deleteAnimal
(World w, String forestName, String treeName, Animal animalName);

/* Usuwa dane drzewo ze wszystkimi zwierzętami nań żyjąceymi z danego lasu.
 * Odpowiada za polecenie DEL las drzewo.
 * Zakłada poprawność argumentów.
 * Zwalnia pamięć zaalokowaną na usuwane drzewo i jego podstruktury oraz
 * przyjmowane argumenty typu String.
 * todo zwalnianie
 */
extern void deleteTree(World w, String forestName, String treeName);

/* Usuwa dany las ze wszystkimi drzewami i zwierzętami nań żyjącymi.
 * Odpowiada za polecenie DEL las.
 * Zakłada poprawność argumentów.
 * Zwalnia pamięć zaalokowaną na usuwany las i jego podstruktury oraz
 * przyjmowane argumenty typu String.
 * todo zwalnianie
 */
extern void deleteForest(World w, String forestName);

/* Usuwa wszystko, co znajduje się za danym węzłem na liście lasów
 * (w naszym wypadku po przyjęciu wskaźnika na pierwszy
 * element listy lasów - atrapę usunie wszystko, zostawiając
 * wskaźnik na "pusty" świat).
 * Odpowiada za polecenie DEL.
 * Zwalnia pamięć zaalokowaną na wszystkie struktury i ich nazwy.
 */
extern void clearWorld(World w);

#endif //DELETE_H
