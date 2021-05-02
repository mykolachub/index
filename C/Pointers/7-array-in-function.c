#include<stdio.h>

// this returns the first element
// because A referenses to the first element
// so the passed argument is just 1, so the length is 1
int sumOfAll_no(int A[]) {
    int i, sum = 0;
    int length = sizeof(A) / sizeof(A[0]); // 4 bytes / 4 bytes = 1
    for (i = 0; i < length; i++) {
        sum += A[i]; // A[i] is *(A + i)
    }
    return sum; // the first element
}

// this returns the truly sum due to passed array's length
// so we can iterate throw array by *(A + i) where i = 1...length
int sumOfAll_yes(int A[], int length) {
    int i, sum = 0;
    for (i = 0; i < length; i++) {
        sum += A[i]; // A[i] is *(A + i)
    }
    return sum; // truly sum
}

int main() {
    int A[] = { 1,2,3,4,5 };
    int size = sizeof(A); // 20 bytes = 5 elements by 4 bytes each
    int length = sizeof(A) / sizeof(A[0]); // 5 elements = 20 bytes deviding by the size of the first element (4 bytes in int)

    int total_no = sumOfAll_no(A);
    printf("%d\n", total_no); // 1

    int total_yes = sumOfAll_yes(A, length); // length is needed
    printf("%d\n", total_yes); // 15

    return 0;
}