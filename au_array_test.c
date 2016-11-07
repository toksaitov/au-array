#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <assert.h>

#include "au_array.h"

void test_au_array_create()
{
    au_array * array = au_array_create();
    assert(array);
    assert(array->length == 0);
    assert(array->element_size == 1);
    assert(array->elements == NULL);
}

void test_au_array_create_of_length()
{
    au_array * array = au_array_create_of_length(5, sizeof(int));
    assert(array);
    assert(array->length == 5);
    assert(array->element_size == sizeof(int));
    assert(array->elements);
      
    int number = 1234567890;
    array->elements[3] = &number;
    assert(*(int *)(array->elements[3]) == number);
}

void test_au_array_create_with_array()
{
    assert(false);
}

void test_au_array_create_with_buffer()
{
    assert(false);
}

void test_au_array_free()
{
    assert(false);
}

void test_au_array_free_with_elements()
{
    assert(false);
}

void test_au_array_free_with_element_handler()
{
    assert(false);
}

void test_au_array_is_empty()
{
    assert(false);
}

void test_au_array_length()
{
    assert(false);
}

void test_au_array_size()
{
    assert(false);
}

void test_au_array_element_size()
{
    assert(false);
}

void test_au_array_first()
{
    assert(false);
}

void test_au_array_last()
{
    au_array * array = au_array_create_of_length(5, sizeof(int));
    int number = 1234567890;
    array->elements[4] = &number;
    assert(*(int *)au_array_last(array) == number);
}

void test_au_array_get()
{
    assert(false);
}

int main(int argc, char **argv)
{
    test_au_array_create();
    test_au_array_create_of_length();

    test_au_array_last();

    return 0;
}

