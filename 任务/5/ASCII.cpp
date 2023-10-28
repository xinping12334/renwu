#include <stdio.h>

int main() {
    int asciiCode;
    
    // 输入一串字符串的ASCII码
    printf("请输入一串字符串的ASCII码（以空格分隔）：\n");
    
    // 循环读取每个ASCII码并转义为字符输出
    while (scanf("%d", &asciiCode) != EOF) {
        printf("%c", asciiCode);
    }
    
    printf("\n");
    
    return 0;
}

