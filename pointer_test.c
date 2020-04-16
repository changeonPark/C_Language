#include <stdio.h>

void pointer(){
    int num = 5;
    int *pointer1 = &num;
    int **pointer2 = &pointer1;

    printf("%d\n%d", *pointer2, **pointer2); //*pointer2 = pointer2가 가리키는 주소값
                                             //**pointer2 = pointer2가 가리키는 변수의 주소값
}

void main(){
    pointer();
}