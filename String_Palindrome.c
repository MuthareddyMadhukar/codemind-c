#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
bool isAlphabet(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
bool isPalindrome(char str[]) {
    int left = 0;
    int right = 0;
    while (str[right] != NULL) {
        right++;
    }
    right--;
    while (left < right) {
        while (!isAlphabet(str[left]) && left < right) {
            left++;
        }
        while (!isAlphabet(str[right]) && left < right) {
            right--;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    char str[100];
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("Palindrome
");
    } else {
        printf("Not Palindrome
");
    }

    return 0;
}
