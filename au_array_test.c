#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <assert.h>

#include "au_array.h"

void test_au_array_create()
{
    puts("Test we can create an array");

    au_array *array = au_array_create();

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
    puts("Test: free an array.");
    
    au_array *array = au_array_create_of_length(1, sizeof(char));
    
    assert(array);
    
    au_array_free(array);
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
    puts("Test: We can check if the array is empty.");

    au_array *array = au_array_create_of_length(1, sizeof(char));

    assert(au_array_is_empty(array) == false);
}

void test_au_array_length()
{
    puts("Test: We can check the length of an array.");

    au_array *array = au_array_create_of_length(1, sizeof(char));

    assert(au_array_length(array) == 1);    
}

void test_au_array_size()
{
    puts("Test: We can check the  size of an  array.");

    au_array *array = au_array_create_of_length(1, sizeof(char));

    assert(au_array_size(array) == sizeof(char));
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
    assert(au_array_last(NULL) == NULL);
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

