#include <stdio.h>

int main() {
    // Khởi tạo danh sách 4 mã số thứ tự khám ban đầu
    int queue_numbers[4] = {1001, 1002, 1003, 1004};

    // Sửa lại vị trí chỉ số mảng (Bệnh nhân thứ 4 tương ứng với chỉ số index là 3)
    int patient_position = 3; 
    int new_queue_number = 1099;

    // Thao tác cập nhật mã số thứ tự an toàn trong phạm vi mảng
    queue_numbers[patient_position] = new_queue_number;

    // In ra danh sách 4 bệnh nhân ca sáng
    printf("--- DANH SACH SO THU TU KHAM BENH ---\n");
    printf("Benh nhan 1 (Index 0): %d\n", queue_numbers[0]);
    printf("Benh nhan 2 (Index 1): %d\n", queue_numbers[1]);
    printf("Benh nhan 3 (Index 2): %d\n", queue_numbers[2]);
    printf("Benh nhan 4 (Index 3): %d\n", queue_numbers[3]);

    return 0;
}