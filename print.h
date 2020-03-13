#ifndef PRINT_H
#define PRINT_H

#include "structures.h"
#include "stringBuilder.h"
#include "find.h"

/* Odpowiada za polecenie PRINT las drzewo, zakłada poprawność
 * argumentów. Zwalnia pamięć zaalokowaną na argumenty typu String
 * po wykonaniu polecenia.
 * todo zwalnianie
 */
extern void printAnimals(World w, String forestName, String treeName);

/* Odpowiada za polecenie PRINT las, zakłada poprawność
 * argumentów. Zwalnia pamięć zaalokowaną na argumenty typu String
 * po wykonaniu polecenia.
 * todo zwalnianie
 */
extern void printTrees(World w, String forestName);

/* Odpowiada za polecenie PRINT, zakłada poprawność
 * argumentów. Zwalnia pamięć zaalokowaną na argumenty typu String
 * po wykonaniu polecenia.
 * todo zwalnianie
 */
extern void printForests(World w);

#endif //PRINT_H
