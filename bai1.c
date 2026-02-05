/******************************************************************************
 * Họ và tên: [Nguyễn Vũ Đăng Khoa]
 * MSSV:      [PS49647]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// HÀM IN MẢNG
void printArray(int arr[], int size) {
    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[10];

    randomArray(arr, n, 1, 100);
    printArray(arr, n);

    // ===== BÀI 1 =====
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        float avg = (float)sum / count;
        printf("Trung bình các số chia hết cho 3 là: %.2f\n", avg);
    } else {
        printf("Không có số nào chia hết cho 3 trong mảng.\n");
    }

    return 0;
}


