#include <stdio.h>

int maxMin(int arr[],int len,int max,int min,int n) {
    if(n>=len) {
        printf("max = %d, min = %d\n", max, min);
        return 0;
    }
    if (max < arr[n]) {
        max = arr[n];
    }
    if (min > arr[n] ) {
        min = arr[n];
    }
    return maxMin(arr,len,max,min,n+1);
}

int main(void) {
    int len;
    printf("nhap do dai mang: ");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        printf("nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    maxMin(arr, len,arr[0],arr[0] , 0);
    return 0;
}