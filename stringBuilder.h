#ifndef STRINGBUILDER_H
#define STRINGBUILDER_H

#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

// Struktura przechowująca słowa.
struct stringBuilder {
    char *word;
    size_t length;
    size_t capacity;
};

// Nowy typ String - wskaźnik na strukturę typu stringBuilder.
typedef struct stringBuilder *String;

// Tworzynowy obiekt typu String.
String newString();

// Kopiuje obiekt typu String.
String copyString(String s);

// Dodaje znak na koniec słowa.
bool append(String s, char c);

// Porównuje 2 słowa.
bool compare(String s1, String s2);

// Wypisuje słowo na standardowe wyjście
void printString(String s);

// Zwalnia paimęć zaalokowaną na słowo i wskaźnik na nie.
void freeString(String s);


#endif // STRINGBUILDER_H
