#include <stdio.h>

void pointer(){
    int array[] = {0 ,10 ,2};
    int *point = array;
    printf("%d", point[1]);
}

void main(){
    pointer();
}