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
        �迭�� �����Ϳ� ������ ������� ����.
        �迭�� �̸� = �迭 ������ ù ��° �ּ�.
        ������ = ���� <> �迭�� �̸� = ���
    */
   /* ������. �迭�� ����̹Ƿ� >>> �迭 10ĭ�� ��� x���� �ĳ�����°ž� >> ��� ������ �� �� �ۿ� ����?
   int x = 10;
   int y[10];
   y = &x;
   */

   /* �迭�� �����͸� ���Ͽ� �� ���.
   int array[5] = {1, 2, 3, 4, 5};
   int *num = array;
   printf("%d\n", num[2]);
   */

/*
  int array[5] = {1, 2, 3, 4, 5};
  for(int i = 0; i < 5; i++){
      printf("%d ", *(array + i)); // array + i = �ּҰ� 4����Ʈ�� �����ϸ� ��� / *(array + i), *array + i = array �迭�� ���� �����ϸ� ��� == array[i].
  }
  printf("\n");
*/

/*
//������ �迭 ���� �м�
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