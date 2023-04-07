#include <stdio.h>

union example {
        int intv;
        float fv;
        char cv;
};

int main() {
    union example myunion;
    char* p;
    // myunion.fv = 4.0;
    printf("%f\n", myunion.fv);
    printf("%d\n", myunion.intv);

    myunion.cv = 'a';

    putchar(myunion.cv);
    putchar('\n');

    p = &myunion.cv;
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
}