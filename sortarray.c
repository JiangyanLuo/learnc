#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void sort_array(char*);
int compare(const void*, const void*);

int main() {
    char* str = malloc(50 * sizeof(char));

    puts("Enter a sentence: ");
    fgets(str,49,stdin);

    char* cpystr = malloc(50);
    strcpy(cpystr,str);

    sort_array(str);

    printf("Sorted sentence: \n%s\n",str);

    qsort(cpystr,strlen(cpystr),sizeof(char),compare);

    printf("Sorted sentence with qsort:\n%s\n",cpystr);

    free(str);
    
}

void sort_array(char* str) {
    int flag;
    int len = strlen(str);

    do {
        flag = 0;
        for(int i = 0; i < len - 1; i++) {
            if(compare(&str[i],&str[i+1]) > 0) {
            //if(str[i] > str[i+1]) {
                int temp = str[i+1];
                str[i+1] = str[i];
                str[i] = temp;

                flag = 1;
            }
        }

    } while(flag);
}

int compare(const void* a, const void* b) {
    return *(char*)a - *(char*)b;
}