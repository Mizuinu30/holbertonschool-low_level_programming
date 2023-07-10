#include "main.h"
#include <stdio.h>`
#include <cstdlib>

/**
 *_array(unsigned int size, char c) - a function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of array.
 *@c: characters.
 *Return: a pointer array or null it it falis
 */


char* create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char* array = (char*)malloc(size * sizeof(char));
    if (array == NULL) {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}

