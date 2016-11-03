#ifndef AU_ARRAY_H
#define AU_ARRAY_H

#include <stddef.h>
#include <stdbool.h>

#pragma mark - Data Types

typedef struct _au_array
{
    size_t length;       /* number of elements in the array    */
    size_t element_size; /* size of every element in the array */
    void *elements;      /* elements of the array              */
} au_array;

typedef void (*au_array_element_handler)(void *element);

#pragma mark - Creating Arrays

/*
 * Creates an empty array
 */
au_array* au_array_create();

/*
 * Creates an array with `count` elements of `size`
 */
au_array* au_array_create_of_length(size_t count, size_t size);

/*
 * Creates a copy from another `array`
 */
au_array* au_array_create_with_array(au_array *array);

/*
 * Creates an array from a `buffer` with `count` elements of `size`
 */
au_array* au_array_create_with_buffer(void *buffer, size_t count, size_t size);

#pragma mark - Deallocating Arrays

/*
 * Deallocates the `array`
 */
void au_array_free(au_array *array);

/*
 * Deallocates every item in the `array` with the `array` itself
 */
void au_array_free_with_elements(au_array *array);

/*
 * Calls a deallocation `handler` for every item in the `array` before deleting
 * the `array` itself
 */
void au_array_free_with_element_handler(au_array *array, au_array_element_handler handler);

#pragma mark - Querying Metadata

/*
 * Checks if the `array` is empty
 */
bool au_array_is_empty(au_array *array);

/*
 * Returns the length of the `array`
 */
size_t au_array_length(au_array *array);

/*
 * Returns the size of the `array`
 */
size_t au_array_size(au_array *array);

/*
 * Returns the element size of the `array`
 */
size_t au_array_element_size(au_array *array);

#pragma mark - Querying an Array

/*
 * Returns the first element of the `array` or `NULL` if the `array` is empty
 */
void *au_array_first(au_array *array);

/*
 * Returns the last element of the `array` or `NULL` if the `array` is empty
 */
void *au_array_last(au_array *array);

/*
 * Returns an element at `index` from the `array` or `NULL` if the `index` is
 * out of range
 */
void *au_array_get(au_array *array, size_t index);

#endif

