#include <stdio.h>

void TwoArray(){
    int twoarray[3][3] = { {1, 2, 3}, {4, 5 , 6}, {7, 8, 9} };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", twoarray[i][j]);
        }
        printf("\n");
    }
}

void TripleArray(){
     int triarray[2][3][3] = {  { {1, 2, 3}, {4, 5 , 6}, {7, 8, 9} },
                                { {10, 20, 30}, {40, 50 , 60}, {70, 80, 90} } 
                             };
     for(int x = 0; x < 2; x++){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%d ", triarray[x][i][j]);
            }
            printf("\n");
        }
        printf("\n");
     }
     
}

void PointerArray(){
    /*
        배열은 포인터와 동일한 방식으로 동작.
        배열의 이름 = 배열 원소의 첫 번째 주소.
        포인터 = 변수 <> 배열의 이름 = 상수
    */
   /* 오류남. 배열은 상수이므로 >>> 배열 10칸중 어디에 x값을 쳐넣으라는거야 >> 고로 오류다 날 수 밖에 없다?
   int x = 10;
   int y[10];
   y = &x;
   */

   /* 배열을 포인터를 통하여 값 출력.
   int array[5] = {1, 2, 3, 4, 5};
   int *num = array;
   printf("%d\n", num[2]);
   */

/*
  int array[5] = {1, 2, 3, 4, 5};
  for(int i = 0; i < 5; i++){
      printf("%d ", *(array + i)); // array + i = 주소값 4바이트씩 증가하며 출력 / *(array + i), *array + i = array 배열의 값이 증가하며 출력 == array[i].
  }
  printf("\n");
*/

/*
//포인터 배열 구조 분석
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("First Address = %d - Last Address =  %d \n", array[0], array + 9);
*/

    int array[2][5] = { {1, 2, 3, 4, 5}, {10, 11, 12, 13, 14} };
    int (*point)[5] = array;
    for(int i = 0; i < 5; i++){
        printf("%d ", point[1][i]);
    }
}




void main(){
    PointerArray();
}