#include <stdio.h>
int findLength(char str[]) {
    int length = 0;
    while (str[length] != NULL) {
        length++;
    }
    return length;
}
void reverseString(char str[]) {
    int length = findLength(str);
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    scanf("%[^
]s", str);
    reverseString(str);
    printf("%s
", str);

    return 0;
}
