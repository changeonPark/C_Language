#include <stdio.h>
#include <stdlib.h>

void choose(int *a, int *b){
    printf("input A x B\n");
    printf("A: ");
    scanf("%d", a);
    int temp;
    while((temp = getchar()) != EOF && temp != '\n'){}
    printf("B: ");
    scanf("%d", b);
    printf("test %d %d\n", *a, *b);
}

int inputarr(int **arr,int *x, int *y){
    int col = *x;
    int row = *y;
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){ //*(arr +i) = arr배열의 행, +j = 열
            *(*(arr + i) + j) = i * row + (j+1);
        }         
    }
}

void printarr(int **arr, int *x, int *y){
    for(int i = 0; i < *x; i++){
            for(int j = 0; j < *y; j++){
                printf("%4d ", *(*(arr + i) + j));
            }
            printf("\n");         
        }
}



void main(){
    int x, y;
    choose(&x, &y); // a x b 2차원 배열 생성.
    int **arr = malloc(sizeof(int *) * x); //x만큼 arr배열의 행 생성.
    for(int i = 0; i < y; i++){
        *(arr + i) = malloc(sizeof(int) * i); //y만큼 arr배열의 열 생성.
    }
    inputarr(arr, &x, &y);
    printarr(arr, &x, &y);

    for(int i = 0; i < y; i++){
        free(*(arr + i));
    }
    free(arr);
}