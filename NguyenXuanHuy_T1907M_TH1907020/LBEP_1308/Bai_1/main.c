#include <stdio.h>

int Sum(int m, int n) {
    int tong;
    tong = m + n;
    return tong;
}

int Substraction(int m, int n) {
    int hieu;
    hieu = m - n;
    return hieu;
}

int Mutiplication(int m, int n) {
    int tich;
    tich = m * n;
    return tich;
}

float Division(float m,float n) {
    float thuong;
    thuong = m / n;
    return thuong;
}

int main() {
    int m, n;
    printf("Nhap m =");
    scanf("%d", &m);
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("\n");
    printf(" m + n = %d\n", Sum(m,n));
    printf("m - n = %d\n", Substraction(m,n));
    printf("m * n = %d\n",Mutiplication(m,n));
    printf("m : n = %f\n", Division(m,n));
    return 0;
}