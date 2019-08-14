

#include <stdio.h>

void nhap_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("+ Number [%d]: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void dao_mang(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

void in_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
}

int main() {
    int a[10], n=10;
    nhap_mang(a, n);
    dao_mang(a, n);
    printf("\nResult: ");
    in_mang(a, n);
    return 0;
}