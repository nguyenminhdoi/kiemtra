#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
}

// Hàm nhập dãy số
void nhap(int a[], int *n) {
}

// Hàm xuất dãy số
void xuat(int a[], int n) {

}

// Hàm sắp xếp tăng dần (Bubble Sort)
void sapXepTang(int a[], int n) {

}

// Hàm đếm số nguyên tố
int demSoNguyenTo(int a[], int n) {

}

// Hàm main chỉ gọi các hàm
int main() {
    int a[100], n;

    nhap(a, &n);

    printf("\nTruoc khi sap xep:\n");
    xuat(a, n);

    sapXepTang(a, n);

    printf("\nSau khi sap xep tang dan:\n");
    xuat(a, n);

    int kq = demSoNguyenTo(a, n);
    printf("\nSo luong so nguyen to trong day: %d\n", kq);

    return 0;
}