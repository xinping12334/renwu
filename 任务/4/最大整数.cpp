#include <stdio.h>

int main() {
    int numbers[3];
    
 
    printf("请输入三个非零整数：\n");
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
    printf("合成的最大三位整数为：%d\n", maxNumber);
    
    return 0;
}

