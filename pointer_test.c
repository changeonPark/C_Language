#include <stdio.h>

void pointer(){
    int array[] = { 1, 2, 3, 4 ,5};
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", &array[i]);
    }
}

void main(){
    pointer();
}