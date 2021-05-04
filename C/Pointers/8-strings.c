#include<stdio.h>

void printS(char C[]) {
    // compilator understands char C[] as char* C
    // \0 - end of the string

    // C - address to the first character
    // C + i - address to particular character

    // *C - value of first character
    // *(C + i) - value of particular character
   
    // by iteration variable
    // int i = 0;
    // while (C[i] != '\0') {
    //     printf("%c", C[i]);
    //     i++;
    // }
    // printf("\n");

    // by pointers
    while (*C != '\0') {
        printf("%c", *C);
        C++; // incrementing address value by one --> moving to the next character ( sizeof(char) = 1 byte )
    }
    printf("\n");
}

int main() {

    char C[] = "String is here!";
    printS(C); // prints only string

    return 0;
}