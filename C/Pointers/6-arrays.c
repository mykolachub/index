#include<stdio.h>

int main() {
    int A[5] = { 10,20,30,40,50 };
    int* p;
    p = A;

    printf("Address = %d, Value = %d\n", p, *p); // val = 10
    p++;
    printf("Address = %d, Value = %d\n", p, *p); // val = 20

    // p++ - valid
    // A++ - invalid

    printf("%d\n", A); // address of first element
    printf("%d\n", &A[0]); // address of first element

    printf("%d\n", *(A + 0)); // value of first element
    printf("%d\n", A[0]); // value of first element

    printf("%d\n", *p); // val = 20
    printf("%d\n", *(p + 1)); // val = 30

    // Address &A[i] or (A + i)
    // Value A[i] or *(A + i)

    return 0;
}