#include <stdlib.h>
#include <string.h>
#include "stringBuilder.h"

/* Przyjęta przeze mnie początkowa ilość pamięci do
 * zaalokowania na nowe słowo.
 */
const size_t init_cap = 4;

/* Przyjmuję, że przy realokoacji pamięci na słowa,
 * powiększamy ją dwukrotnie.
 */
const size_t multiplier = 2;

String newString() {
    String n = malloc(sizeof(struct stringBuilder));
    if (n == NULL) { return NULL;}
    n->word = calloc(init_cap, sizeof(char));
    if (!n->word) { return NULL;}
    n->capacity = init_cap;
    n->length = 0;
    return n;
}

bool append(String s, char c) {
   s->word[s->length] = c;
   s->length ++;
   if (s->length == s->capacity) {
       if (!realloc(s->word, s->capacity * multiplier)) {
           return false;
       }
       s->capacity *= 2;
   }
   return true;
}

String copyString(String s) {
    String result = newString();
    if (result == NULL) { return NULL;}
    bool trouble = false;
    for (size_t i = 0; i < s->length && !trouble; i ++) {
        if (!append(result, s->word[i])) {
            trouble = true;
        }
    }
    if (trouble) {
        freeString(result);
        return NULL;
    }
    return result;
}

bool compare(String s1, String s2) {
    if (s1 == NULL || s2 == NULL) { return false;}
    if (strcmp(s1->word, s2->word) == 0) { return true;}
    return false;
}

void printString(String s) {
    printf("%s\n", s->word);
}

void freeString(String s) {
    if (s == NULL) {return;}
    free(s->word);
    free(s);
}

