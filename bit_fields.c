#include <stdio.h>

int main(){
    union {
        unsigned int intv;
        struct {
            unsigned int A: 1;
            unsigned int B: 2;
            unsigned int C: 4;
            unsigned int D: 6;
            unsigned int E: 19;
        };
    } popo;

    popo.intv = 0;
    printf("%u\n", popo.A);
    printf("%u\n", popo.B);
    printf("%u\n", popo.C);
    printf("%u\n", popo.D);
    printf("%u\n", popo.E);

    puts("**********************");

    popo.intv = 12345;
    printf("%u\n", popo.A);
    printf("%u\n", popo.B);
    printf("%u\n", popo.C);
    printf("%u\n", popo.D);
    printf("%u\n", popo.E);

}