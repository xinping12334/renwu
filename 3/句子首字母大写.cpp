#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeFirstLetter(char* sentence) {
    int length = strlen(sentence);
    
   
    if (length > 0) {
        sentence[0] = toupper(sentence[0]);
    }
    
   
    for (int i = 1; i < length; i++) {
        if (sentence[i - 1] == ' ') {
            sentence[i] = toupper(sentence[i]);
        }
    }
}

int main() {
    char sentence[] = "we are family!!";
    
    capitalizeFirstLetter(sentence);
    
    printf("%s\n", sentence);
    
    return 0;
}

