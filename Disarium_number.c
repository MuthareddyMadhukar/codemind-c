#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}
bool isDisarium(int num) {
    int sum = 0;
    int originalNum = num;
    int numOfDigits = countDigits(num);
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numOfDigits);
        numOfDigits--;
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isDisarium(num))
        printf("True
");
    else
        printf("False
");

    return 0;
}
