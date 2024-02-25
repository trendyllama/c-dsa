#include <stdio.h>
#include <stdlib.h>


struct ArrayList
{
    int *array;
    size_t size;
    size_t capacity;
};

void initialize(struct ArrayList *dyn_array, size_t initial_capacity)
{
    dyn_array->array = (int*)malloc(initial_capacity * sizeof(int));

    if (dyn_array->array == NULL)
    {
        fprintf(stderr, "memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    dyn_array->size = 0;
    dyn_array->capacity = initial_capacity;

}

void append(struct ArrayList *dyn_array, int element)
{
    //handling for overflow, reallocating if out of capacity
    if (dyn_array->size == dyn_array->capacity)
    {
        dyn_array->capacity *= 2;
        dyn_array->array = (int*)realloc(dyn_array->array, dyn_array->capacity * sizeof(int));

        if (dyn_array->array == NULL) {
            fprintf(stderr, "Memory reallocation failed\n");
            exit(EXIT_FAILURE);
        }
    }

    //append the element and update size
    dyn_array->array[dyn_array->size++] = element;
    
}

void free_array(struct ArrayList *dyn_array)
{
    free(dyn_array->array);
    dyn_array->array = NULL;
    dyn_array->size = 0;
    dyn_array->capacity = 0;
}

int main()
{
    struct ArrayList example_array;

    size_t initial_cap = 10;

    initialize(&example_array, initial_cap);

    for (size_t i = 1; i < 10; i++)
    {
        /* code */
        append(&example_array, i);
    }
    
    for (size_t i = 0; i < example_array.size; i++)
    {
        /* code */
        printf("%d\n", example_array.array[i]);
    }

    printf("\n");

    free_array(&example_array);

    return 0;
    
}  