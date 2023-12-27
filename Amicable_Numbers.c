#include <stdio.h>

void amicable(int a, int b) {
    int i, s = 0, t = 0;
    
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            s += i;
        }
    }
    
    for (i = 1; i <= b; i++) {
        if (b % i == 0) {
            t += i;
        }
    }
    
    if (s == t) {
        printf("Amicable
");
    } else {
        printf("Not Amicable
");
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    amicable(x, y);
}