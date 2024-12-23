#include <stdio.h>

int main() {
    int arr[100], n = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. nhap vao mang\n");
        printf("2. hien thi mang \n");
        printf("3. Thêm vao mang t?\n");
        printf("4. sua phan tu mang\n");
        printf("5. xoa phan tu mang\n");
        printf("6. That mang\n");
        printf("ban hay chon 1 den 6: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("nhap so luongp han tu mang ");
                scanf("%d", &n);
                printf("so luong phan tu mang khong hop le:\n");
                for (int i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
			                if (n == 0) {
                    printf("mang rong hay nhap mang.\n");
                } else {
                    printf("Mang hien tai la: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                printf("Nhap phan tu mang can them: ");
                scanf("%d", &arr[n]);
                n++;
                printf("phan tu da duoc them vao mang.\n");
                break;
            }
            case 4: {
                int index, newValue;
                printf("nhap vi tri muon sua (tu 0 den %d): ", n - 1);
                scanf("%d", &index);
                if (index >= 0 && index < n) {
                    printf(" %d: ", index);
                    scanf("%d", &newValue);
                    arr[index] = newValue;
                    printf("phan tu thu %d da dc xoa %d.\n", index, newValue);
                } else {
                    printf("V? trí không h?p l?.\n");
                }
                break;
            }
            case 5:
            printf("nhap phan  tu(tu 0 den %d): ", n - 1);
            scanf("%d", &index);
            if (index < 0 || index >= n) {
                printf("vi tri khong hop le!\n");
            } else {
                for (int i = index; i < n - 1; i++) {
                    array[i] = array[i + 1];
                }
                n--;
                printf("da xoa phan tu vi tri %d!\n", index);
            }
            break;

        case 6:
            printf("thoat chuong trinh!\n");
            break;

        default:
            printf("lua chon khong hop le vui long nhap lai.\n");
        }
    } while (choice != 6);

    return 0;
}
