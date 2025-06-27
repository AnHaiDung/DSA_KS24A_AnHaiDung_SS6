#include <stdio.h>

int binary(int n) {
    if (n == 0) return 0;
    binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;
    printf("nhap 1 so bat ki: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}