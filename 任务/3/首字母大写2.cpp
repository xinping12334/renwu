#include <stdio.h>
#include <ctype.h>

void capitalizeFirstWord(char* sentence) {
    int i = 0;
    
 
    while (sentence[i] == ' ') {
        i++;
    }
    
  
    if (sentence[i] != '\0') {
        sentence[i] = toupper(sentence[i]);
    }
}

int main() {
    char sentence[] = "we are family!!";
    
    capitalizeFirstWord(sentence);
    
    printf("%s\n", sentence);
    
    return 0;
}

