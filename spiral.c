
#include <stdio.h>

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int top = 0, left = 0, bottom = 3, right = 3;
    int dir = 0;

    while (top <= bottom && left <= right) {
        if (dir == 0) {
            for (int i = left; i <= right; i++) {
                printf("%d ", arr[top][i]);
            }
            top += 1;
        } else if (dir == 1) {
            for (int i = top; i <= bottom; i++) {
                printf("%d ", arr[i][right]);
            }
            right -= 1;
        } else if (dir == 2) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom -= 1;
        } else if (dir == 3) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left += 1;
        }

        dir = (dir + 1) % 4;
    }

    return 0;
}
