#include <stdio.h>

int countWay(int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 0;
    }
    return countWay(n - 1)+countWay(n-2);
}

int main() {
    int n;
    printf("nhap so bac: ");
    scanf("%d", &n);
    int count = countWay(n);
    printf("co %d cach\n", count);
    return 0;
}