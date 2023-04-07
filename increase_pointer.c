#include <stdio.h>

int main () {
    int a, *b;
    b = &a;
    *b = 10;
    printf("%d\n",a);
    ++*b; //(*p)++
    printf("%d\n",a);

}