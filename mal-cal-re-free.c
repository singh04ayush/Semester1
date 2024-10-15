#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *ptr;

    // Using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }

    // Using calloc
    printf("\n\nUsing calloc:\n");
    int* ptr_calloc = (int*)calloc(n, sizeof(int));
    if (ptr_calloc == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &ptr_calloc[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", ptr_calloc[i]);
    }

    // Using realloc
    printf("\n\nUsing realloc:\n");
    int new_size;
    printf("Enter new size: ");
    scanf("%d", &new_size);

    ptr = (int*)realloc(ptr, new_size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", new_size);
    for (i = 0; i < new_size; ++i) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered: ");
    for (i = 0; i < new_size; ++i) {
        printf("%d ", ptr[i]);
    }

    // Deallocating memory
    free(ptr);
    free(ptr_calloc);

    return 0;
}
