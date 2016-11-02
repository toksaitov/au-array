#include <stdlib.h>
#include <assert.h>

#include "au_array.h"

#pragma mark - Creating Arrays

au_array* au_array_create()
{
    return NULL;
}

au_array* au_array_create_of_length(size_t count, size_t size)
{
    return NULL;
}

au_array* au_array_create_with_array(au_array array)
{
    return NULL;
}

au_array* au_array_create_with_buffer(void *buffer, size_t count, size_t size)
{
    return NULL;
}

#pragma mark - Deallocating Arrays

void au_array_free(au_array *array)
{

}

void au_array_free_with_elements(au_array *array)
{

}

void au_array_free_with_element_handler(au_array *array, au_array_element_handler handler)
{

}

#pragma mark - Querying Metadata

bool au_array_is_empty(au_array *array)
{
    return true;
}

size_t au_array_length(au_array *array)
{
    return 0;
}

size_t au_array_size(au_array *array)
{
    return 0;
}

size_t au_array_element_size(au_array *array)
{
    return 0;
}

#pragma mark - Querying an Array

void *au_array_first(au_array *array)
{
    return NULL;
}

void *au_array_last(au_array *array)
{
    return NULL;
}

void *au_array_get(au_array *array, size_t index)
{
    return NULL;
}

