#include <stdio.h>

int main() {
    int asciiCode;
    
    // ����һ���ַ�����ASCII��
    printf("������һ���ַ�����ASCII�루�Կո�ָ�����\n");
    
    // ѭ����ȡÿ��ASCII�벢ת��Ϊ�ַ����
    while (scanf("%d", &asciiCode) != EOF) {
        printf("%c", asciiCode);
    }
    
    printf("\n");
    
    return 0;
}

