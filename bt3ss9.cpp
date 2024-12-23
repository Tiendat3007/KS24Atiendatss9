#include <stdio.h>

int main() {
    int array[100];
    int n, index;
    printf("nhap so luong phan tu mang(toi da 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("so luong phan tu ban nhap khong hop le!\n");
        return 1;
    }
    printf("nhap cac phan tut?:\n");
    for (int i = 0; i < n; i++) {
        printf("Ph?n t? [%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("nhap vi tri can xoa (tu 0 den %d): ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("vi tri khong hop el!\n");
        return 1;
    }
    for (int i = index; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--;
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

