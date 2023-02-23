#include <stdio.h>

typedef struct {
    char last_name[20];
    char first_name[20];
    char title[20];
    int id;
    int SSN;
} data;

typedef struct {
    data employee1;
    data employee2;
} employees;

int main(void) {
    for (int i=0; i<2; i++) {
        printf("Enter first name: ");
        printf("Enter last name: ");
        printf("Enter title: ");
        printf("Enter SSN");
        printf("Enter ID: ");
    }
}