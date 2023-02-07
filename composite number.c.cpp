#include <stdio.h>
#include <stdbool.h>

bool isComposite(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int a, b;
    printf("Enter the range [a, b]: ");
    scanf("%d%d", &a, &b);
    printf("Composite numbers in the range [%d, %d]:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (isComposite(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
