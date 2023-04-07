#include <stdio.h>
#include <stdlib.h> //malloc()

struct whether {
    const char* day;
    // char day[10];
    float temperature;
};

void sort_by_temperature(struct whether*, int);
void print(struct whether* whethers, int len);

int main() {
    struct whether whethers[7] = {
        {"Monday", 5.0}, 
        {"Tuesday", 12.12}, 
        {"Wendsday", 20.5}, 
        {"Thusday", 30.5},
        {"Friday", 14.9},
        {"Saturday", 23.8},
        {"Sunday", 14.5},
    };

    sort_by_temperature(whethers, sizeof(whethers) / sizeof(struct whether));
    print(whethers, sizeof(whethers) / sizeof(struct whether));

    return 0;
}

void sort_by_temperature(struct whether* whethers, int len) {
    int flag;
    do {
        flag = 0;

        for(int i = 0; i < len - 1; i++) {
            if(whethers[i].temperature > whethers[i+1].temperature) {
                struct whether temp = whethers[i+1];
                whethers[i+1] = whethers[i];
                whethers[i] = temp;
                flag = 1;
            }
        }
    } while(flag);
}

void print(struct whether* whethers, int len) {
    for(int i = 0; i < len; i++) {
        printf("%10s is %5.2f degree.\n", whethers[i].day, whethers[i].temperature);
    }
}