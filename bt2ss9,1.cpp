#include <stdio.h>

int main() {
    int array[] = {1,2,3,4,5};
    int n = sizeof(array) / sizeof(array[0]);
    int index, Value;
    printf("mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("nhap vi tri can sua (tu 0 den %d): ", n - 1);
    scanf("%d", &index);
    if (index >= 0 && index < n) {
        printf("Nhap gia tri moi: ");
        scanf("%d", &Value);
        array[index] =Value;
        printf("Mang khi sua xg la: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        printf("V? trí không h?p l?!\n");
    }

    return 0;
}

