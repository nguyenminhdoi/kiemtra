#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

// Hàm nhập dãy số
void nhap(int a[], int *n) {
    printf("Nhap so phan tu: ");
    scanf("%d", n);
    
    for (int i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm xuất dãy số
void xuat(int a[], int n) {
    printf("Day so: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Hàm sắp xếp tăng dần (Bubble Sort)
void sapXepTang(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm đếm số nguyên tố
int demSoNguyenTo(int a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            dem++;
        }
    }
    return dem;
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