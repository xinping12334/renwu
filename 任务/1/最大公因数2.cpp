#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    
    printf("�������������֣�\n");
    scanf("%d %d", &num1, &num2);
    
    int result = gcd(num1, num2);
    
    printf("��������ǣ�%d\n", result);
    
    return 0;
}

