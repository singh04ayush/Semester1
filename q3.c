#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void change(int arr[], int size) {
    int min = 0;
    int max = 0;

    // Find the index of the smallest and largest elements
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
        if (arr[i] > arr[max]) {
            max = i;
        }
    }

    // Swap the smallest and largest elements
    swap(&arr[min], &arr[max]);
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Interchange the largest and smallest elements
    change(arr, n);

    // Print the new array
    printf("The new array is:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\t", i, arr[i]);
    }

    return 0;
}
