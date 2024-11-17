#include<stdio.h>
#include<stdlib.h>

int* allocatearray(int n){
    int* arr;
    arr = (int *) malloc(n * sizeof(int));
    return arr;
}

void fillwithones(int *arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = 1;
    }
}

void printarray(int *arr, int n){
    for(int i = 0; i < n; i++) {
        printf("%d", *(arr + i));
    }
    printf("\n");
}

void freeallocated(int *arr){
    free(arr);
}

int main(void) {
    int *p;
    p = allocatearray(5);
    fillwithones(p,5);
    printarray(p,5);
    freeallocated(p);

    int *q;
    q = allocatearray(10);
    fillwithones(q,10);
    printarray(q,10);
    freeallocated(q);
}