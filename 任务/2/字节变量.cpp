#include <stdio.h>

int main() {
    unsigned char num = 0b10010010; 
   
    for (int i = 7; i >= 0; i--) {
        unsigned char bit = (num >> i) & 1;
        printf("%d ", bit);
    }
    
    return 0;
}

