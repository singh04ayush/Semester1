#include <stdio.h>

int search(int* arr, int arrSize, int target);

int main() {
    int arr1[] = {1, 3, 5, 6};
    int target1 = 5;
    int result1 = search(arr1, sizeof(arr1) / sizeof(arr1[0]), target1);
    printf("%d\n",result1);

    int arr2[] = {1, 3, 5, 6};
    int target2 = 2;
    int result2 = search(arr2, sizeof(arr2) / sizeof(arr2[0]), target2);
    printf("%d", result2);
    return 0;
}

int search(int* arr, int arrSize, int target) {
    int left = 0;
    int right = arrSize - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid; // Target found at index mid
        } else if (arr[mid] < target) {
            left = mid + 1; // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }
    
    // Target not found, return the index where it should be inserted
    return left;
}
