#include<stdio.h>

int main() {
    char test;
    FILE *ptr;
    ptr = fopen("test.txt", "r");

    while (test != EOF) {
        printf("%c", test);
        test = fgetc(ptr);
    }
    return 0;

}