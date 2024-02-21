#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
long long lcm(int a, int b) {
    return ((long long)a * b) / gcd(a, b);
}
int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A, B, K;
        scanf("%d %d %d %d", &N, &A, &B, &K);
        int divisible_by_a = N / A;
        int divisible_by_b = N / B;
        int divisible_by_ab = N / lcm(A, B);
        int total_solved = divisible_by_a + divisible_by_b - 2 * divisible_by_ab;
        if (total_solved >= K)
            printf("Win
");
        else
            printf("Lose
");
    }

    return 0;
}
