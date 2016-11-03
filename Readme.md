au-array
========

au-array is a simple array class in C.

## Types

```c
typedef struct _au_array
{
    size_t length;       /* number of elements in the array    */
    size_t element_size; /* size of every element in the array */
    void *elements;      /* elements of the array              */
} au_array;
```

* `typedef void (*au_array_element_handler)(void *element)` - a function pointer
  type for element processing functions

## Methods

### Creating Arrays

* `au_array* au_array_create()` - creates an empty array

* `au_array* au_array_create_of_length(size_t count, size_t size)` - creates an
  array with `count` elements of `size`

* `au_array* au_array_create_with_array(au_array *array)` - creates a copy from
  another `array`

* `au_array* au_array_create_with_buffer(void *buffer, size_t count, size_t size)`:
  creates an array from a `buffer` with `count` elements of `size`

### Deallocating Arrays

* `void au_array_free(au_array *array)` - deallocates the `array`

* `void au_array_free_with_elements(au_array *array)` - deallocates every item in
  the `array` with the `array` itself

* `void au_array_free_with_element_handler(au_array *array, au_array_element_handler handler)`:
  calls a deallocation `handler` for every item in the `array` before deleting
  the `array` itself

### Querying Metadata

* `bool au_array_is_empty(au_array *array)` - checks if the `array` is empty

* `size_t au_array_length(au_array *array)` - gets the length of the `array`

* `size_t au_array_size(au_array *array)` - gets the size of the `array`

* `size_t au_array_element_size(au_array *array)` - gets the element size of the
  `array`

### Querying an Array

* `void *au_array_first(au_array *array)` - gets the first element of the
  `array` or return `NULL` if empty

* `void *au_array_last(au_array *array)` - gets the last element of the
  `array` or return `NULL` if empty

* `void *au_array_get(au_array *array, size_t index)` - gets an element at
  `index` from the `array` or return `NULL` if the `index` is out of range

## Contributors

* Dmitrii Toksaitov

