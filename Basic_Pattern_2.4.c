#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = N; i >= 1; i--) {
        for (int j = i; j <= N; j++) {
            printf("%d ", j);
        }
        printf("
");
    }
    return 0;
}
