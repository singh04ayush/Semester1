#include <stdio.h>

void findSecondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = arr[0];

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("The largest of these numbers is: %d\n", largest);
    printf("The second largest of these numbers is: %d\n", secondLargest);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The numbers you entered are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    findSecondLargest(arr, n);

    return 0;
}
