#ifndef CHECK_H
#define CHECK_H

#include "structures.h"
#include "stringBuilder.h"
#include "find.h"

/* Sprawdza, czy na świecie istnieje las o danej nazwie.
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK las.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkForest (World w, String forestName);

/* Sprawdza, czy w danym lesie istnieje drzewo o danej nazwie.
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK las drzewo.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkTreeInForest (World w, String forestName, String treeName);

/* Sprawdza, czy na świecie istnieje drzewo o danej nazwie (w dowolnym lesie)
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK * drzewo.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkTree (World w, String treeName);

/* Sprawdza, czy na danym drzewie w danym lesie żyje dane zwierzę.
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK las drzewo zwierzę.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkAnimalInTreeInForest
(World w, String forestName, String treeName, Animal animalName);

/* Sprawdza, czy w danym lesie żyje dane zwierzę (na dowolnym drzewie)
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK las * zwierzę.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkAnimalInForest
(World w, String forestName, Animal animalName);

/* Sprawdza, czy na danym drzewie (w dowolnym lesie) żyje dane zwierzę.
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK * drzewo zwierzę.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkAnimalInTree (World w, String treeName, Animal animalName);

/* Sprawdza, czy na świecie żyje dane zwierzę.
 * Wypisuje "YES" lub "NO" w zależności od wyniku.
 * Odpowiada za polecenie CHECK * * zwierzę.
 * Zakłada, że argumenty, które przyjmuje są poprawne,
 * zwalnia pamięć zaalokowaną na nie po wykonaniu zadania.
 * todo zwalnianie
 */
extern void checkAnimal (World w, Animal animalName);

#endif //CHECK_H
