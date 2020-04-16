#include <stdio.h>

void pointer(){
//배열과 포인터는 시스템적으로 비슷
//배열 선언 후 배열 자체를 포인터 변수처럼 사용 가능
    int array[] = {0 ,10 ,2};
    int *point = array;
    printf("%d", point[1]);
}

void main(){
    pointer();
}