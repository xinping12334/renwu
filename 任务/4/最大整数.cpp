#include <stdio.h>

int main() {
    int numbers[3];
    
 
    printf("��������������������\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }
    
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (numbers[j] < numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
   
    int maxNumber = numbers[0] * 100 + numbers[1] * 10 + numbers[2];
    printf("�ϳɵ������λ����Ϊ��%d\n", maxNumber);
    
    return 0;
}

