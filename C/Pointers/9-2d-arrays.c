#include<stdio.h>

void example(int A[][3]) { 
    // int A[][3] is syntax sugar 
    // compiler understands this as int (*A)[3]
    // int **A - invalid
    // only first dimention can be ignored, other must be specified
}

int main() {

    int A[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int(*p)[3] = A; // valid

    // A == *A == A[0] == &A[0][0] - address of the first element
    // A[i][j] == *(A[i] + j) == *(*(A + i) + j)

    printf("%d = %d = %d = %d\n", A, *A, A[0], &A[0][0]);
    printf("%d = %d", *A, **A);

    example(A);
    
    return 0;
}