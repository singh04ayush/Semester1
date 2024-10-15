#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverseString(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    int i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    // Reverse the string
    reverseString(input);

    printf("Reversed string: %s\n", input);

    // Check if it's a palindrome
    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
