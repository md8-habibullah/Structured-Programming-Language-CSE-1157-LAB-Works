#include <stdio.h>

int is_pal(int n) {
    int r = 0;
    for (; n; n /= 10) r = r * 10 + n % 10;
    return r == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%s\n", is_pal(n) ? "Yes" : "No");
    return 0;
}