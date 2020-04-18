#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// < 동적 할당 >

void Malloc(){
    int *mal = malloc(sizeof(int)); //int형(4byte)만큼 공간 할당.
    printf("%d\n", mal);
    free(mal);
    mal = malloc(sizeof(int));
    printf("%d\n", mal);
    free(mal);
}

void MallocArray(){
    char *arr = malloc(10);
    memset(arr, 'A', 10);
    for(int i = 0; i < 10; i++){
        printf("%c", arr[i]);
    }
}

void MallocArrayPractice(){
    int **arr = (int **)malloc(sizeof(int *) * 3); //2차원 배열 행 3개 생성.
    
    
    for(int i = 0; i < 3; i++){
        *(arr + i) = (int *)malloc(sizeof(int) * 3 ); //각 행에 3개 열 생성.
        for(int j = 0; j < 3; j++){ //*(arr +i) = arr배열의 행, +j = 열
              *(*(arr + i) + j) = i * 3 + j;
        }         
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");         
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            free((*(arr + i) + j));
        }         
    }
    free(arr);

}

void main(){
    MallocArray();
}