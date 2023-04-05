#include <stdio.h>
#include <stdlib.h>

struct array{
    int len;
    int* numbers;
    
};

void destroy_numbers(struct array* myarray) {
    //(*myarray).len = 0;
    //free((*myarray).numbers);
    //(*myarray).numbers = NULL;
    myarray->len = 0;  // -> dereference the object pointer and access a sub element
    free(myarray->numbers);
    myarray->numbers = NULL;

}

struct array create_numbers() {
    struct array myarray;
    myarray.len = 5;
    myarray.numbers = malloc(myarray.len * sizeof(int));
    for(int i = 0; i < myarray.len; i++ ){
        myarray.numbers[i] = i+1;
    }
    return myarray;
}

int main() { 
    struct array result = create_numbers();
    for(int i = 0; i < result.len; i++) {
        printf("%d ", result.numbers[i]);
    }
    puts("\n");

    destroy_numbers(&result);

    printf("%d\n", result.len);
}