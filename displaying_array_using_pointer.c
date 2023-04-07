#include <stdio.h>
#include <string.h>

int main() {
    char* string = "I love plants";
    int len = strlen(string);
    int i;

    for(i=0; i<len; i++) {
        putchar(*(string + i));
       
    }
    return 0;
}