#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
    char* name;
    int age;
};

struct profile* create_profile(int, char*);
void display_profile(struct profile*); 
void destroy_profile(struct profile*);

int main(){
    int age;
    char name[20];

    puts("Enter your age: ");
    scanf("%d",&age); 

    getchar(); //clear the newline character from the buffer

    puts("Enter your name: ");
    
    fgets(name,19,stdin);

    name[strlen(name) -1] = 0; // remove the new line from the end

    struct profile* popo = create_profile(age, name);
    display_profile(popo);

    return 0;
}

struct profile* create_profile(int age, char* name) {

    struct profile* newProfile = malloc(sizeof(struct profile));

    newProfile->age = age;
    newProfile->name = name;

    return newProfile;
}

void display_profile(struct profile* pro) {
    printf("Your name is: %s , and %d years old.\n", pro->name, pro->age);
}

void destroy_profile(struct profile* pro) {
    free(pro);
}