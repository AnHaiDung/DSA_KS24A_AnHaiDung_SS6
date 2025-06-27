#include <stdio.h>

int plate(int n,char A,char B,char C) {
    //b1: dich chuyen n-1 dia tu cot a sang cot trung gian b
    if(n==0) {
        return 0;
    }
    plate(n-1,A,C,B);
    printf("di chuyen tu %c den %c\n",A,C);
    //b2: dich chuyn n-1 dia tu cot trung gian b sang c
    plate(n-1,B,A,C);
}

int main() {
    int n;
    printf("nhap so luong dia: ");
    scanf("%d", &n);
    if (n==1) {
        printf("dia 1 chuyen tu a sang c");
        return 0;
    }
    plate(n,'A','B','C');
    return 0;
}